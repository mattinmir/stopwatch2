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