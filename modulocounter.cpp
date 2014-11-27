#include "modulocounter.hpp"
#include <sstream>




modulocounter::modulocounter(int m)
{
	modulo = m;
	reset();
}

bool modulocounter::increment()
{
	bool rollover = false;
	counter::increment();
	if (get_count() == modulo)
	{
		reset();
		rollover = true;
	}

	return rollover;
}

std::string modulocounter::str() const
{
	std::stringstream ss;
	ss << count << '(' << modulo << ')';
	return ss.str();
}

