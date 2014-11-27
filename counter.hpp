#include <iostream>
#include <string>

class counter
{
public:
	counter();

	virtual bool increment();

	void reset();

	int get_count() const;

	virtual std::string str() const;

	friend std::ostream& operator<<(std::ostream& out, const counter &c);

protected:
	int count;
};

std::ostream& operator<<(std::ostream& out, const counter &c);