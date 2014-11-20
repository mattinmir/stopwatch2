#include "stopwatch.hpp"
using namespace std;

int main()
{
	stopwatch s2;
	for (int i = 0; i < 1000; i++)
		s2.tick();
	s2.reset();

	counter c;
	c.increment();
	cout << c << endl;

	modulocounter mc2;
	mc2.increment();
	cout << mc2 << endl;


	return 0;
}