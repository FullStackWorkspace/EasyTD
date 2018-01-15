#include <iostream>
#include <easyx.h>
#include <boost/timer.hpp>

using namespace std;

int main(int argc, char* argv[])
{
	boost::timer t;

	initgraph(640, 480, SHOWCONSOLE);

	for (int i = 0; i < 10000; i++)
	{
		for (int j = 0; j < 100000; j++)
		{
			
		}
	}

	closegraph();

	cout << t.elapsed() << endl;
	return 0;
}