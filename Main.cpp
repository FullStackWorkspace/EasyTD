#include <iostream>
#include <easyx.h>
#include <boost/timer.hpp>
#include "Configs.h"
#include "Logs.h"

using namespace std;

/*程序入口*/
int main(int argc, char* argv[])
{
	// 计时器
	boost::timer t;

	// 获取配置文件中的屏幕宽高，第二个参数是默认值
	int w = CFGs.get<int>("window.default_width", 800);
	int h = CFGs.get<int>("window.default_height", 600);

//用预编译判断是否DEBUG环境，是的话同时打开控制台
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

	// 显示计时器时间
	cout << t.elapsed() << endl;
	return 0;
}