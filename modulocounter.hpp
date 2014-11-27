#ifndef MODULOCOUNTER_HPP
#define MODULOCOUNTER_HPP

#include "counter.hpp"

class modulocounter : public counter
{
public:
	modulocounter(int m = 0);

	virtual bool increment();

	virtual std::string str() const;
	
private:
	int modulo;
};

#endif
