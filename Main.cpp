#include <iostream>
#include <easyx.h>
#include <boost/timer.hpp>
#include "Configs.h"
#include "Logs.h"

using namespace std;

int main(int argc, char* argv[])
{
	boost::timer t;

	int w = CFGs.get<int>("window.default_width", 800);
	int h = CFGs.get<int>("window.default_height", 600);

#ifdef _DEBUG
	initgraph(w, h, SHOWCONSOLE);
#else
	initgraph(w, h);
#endif

	LOGs.Debug("开始%1%。%3%。%2%。", 1, 2, 3);//测试功能

	for (int i = 0; i < 50000; i++)
	{
		for (int j = 0; j < 50000; j++)
		{

		}
	}

	LOGs.Debug("退出%1%。", 123);//测试功能

	closegraph();

	cout << t.elapsed() << endl;
	return 0;
}