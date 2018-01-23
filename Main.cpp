#include <iostream>
#include <easyx.h>
#include <boost/timer.hpp>
#include "Configs.h"
#include "Logs.h"

using namespace std;

/*�������*/
int main(int argc, char* argv[])
{
	// ��ʱ��
	boost::timer t;

	// ��ȡ�����ļ��е���Ļ��ߣ��ڶ���������Ĭ��ֵ
	int w = CFGs.get<int>("window.default_width", 800);
	int h = CFGs.get<int>("window.default_height", 600);

//��Ԥ�����ж��Ƿ�DEBUG�������ǵĻ�ͬʱ�򿪿���̨
#ifdef _DEBUG
	initgraph(w, h, SHOWCONSOLE);
#else
	initgraph(w, h);
#endif

	LOGs.Debug("��ʼ%1%��%3%��%2%��", 1, 2, 3);//���Թ���

	for (int i = 0; i < 50000; i++)
	{
		for (int j = 0; j < 50000; j++)
		{

		}
	}

	LOGs.Debug("�˳�%1%��", 123);//���Թ���

	closegraph();

	// ��ʾ��ʱ��ʱ��
	cout << t.elapsed() << endl;
	return 0;
}