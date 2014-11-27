#include "counter.hpp"
#include <sstream>

counter::counter() : count(0)
{}

bool counter::increment()
{
	count++;
	return true;
}

void counter::reset()
{
	count = 0;
}

int counter::get_count() const
{
	return count;
}

std::string counter::str() const
{
	std::stringstream ss;
	ss << count;
	return ss.str();
}

std::ostream& operator<<(std::ostream& out, const counter &c)
{
	out << c.str();
	return out;
}