#ifndef "STOPWATCH_HPP"
#define "STOPWATCH_HPP"

#include "modulocounter.hpp"

class stopwatch
{
public:
	stopwatch();

	void tick();

	void reset();

private:
	modulocounter seconds;
	modulocounter minutes;
	modulocounter hours;
};

#endif
