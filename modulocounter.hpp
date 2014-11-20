#include "counter.hpp"

class modulocounter : public counter
{
public:
	modulocounter(int m = 0);

	bool increment();

	virtual std::string str() const;
	
private:
	int modulo;
};