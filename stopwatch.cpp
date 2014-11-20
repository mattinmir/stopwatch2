#include "stopwatch.hpp"

stopwatch::stopwatch() : seconds(60), minutes(60), hours(0)
{}

void stopwatch::tick()
{
	if (seconds.increment())
		if (minutes.increment())
			hours.increment();
}

void stopwatch::reset()
{
	seconds.reset();
	minutes.reset();
	hours.reset();
}