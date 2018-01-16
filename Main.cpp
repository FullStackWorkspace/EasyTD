#include <iostream>
#include <easyx.h>
#include <boost/timer.hpp>
#include "Configs.h"

using namespace std;

int main(int argc, char* argv[])
{
	boost::timer t;
	int w = Configs::get_mutable_instance().get<int>("window.default_width", 800);
	int h = Configs::get_mutable_instance().get<int>("window.default_height", 600);

	initgraph(w, h, SHOWCONSOLE);

	for (int i = 0; i < 100000; i++)
	{
		for (int j = 0; j < 100000; j++)
		{
			
		}
	}

	closegraph();

	cout << t.elapsed() << endl;
	return 0;
}