// Quadrangle.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include "quad.h"
#include "tra.h"
#include "para.h"
#include "diam.h"
#include "rect.h"
#include "sqr.h"
#include "list.h"
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	int i = 0;
	int n1=0,n2=0,n3=0,n4=0,n5 = 0;
	int area = 0;
	char s;
	List<QUADPTR> L;
	List<QUADPTR>::listIterator itr(L);
	Parallelogram para[10]={Parallelogram()};
	Rect rect[10] = { Rect() };
	Diamond dia[10] = { Diamond() };
	Square sqr[10] = { Square() };
	Trapezoid tra[10] = { Trapezoid() };
	cout << "*****************************************************" << endl;
	for (;;)
	{
		srand(unsigned(time(NULL)));
		i = (rand() % 5) + 1;
		cout << "学习请按Y" << "	" << "复习请按R" << "	" << "退出请按N" << endl;
		cin >> s;
		switch (s)
		{
		case 'Y':
		{
			{
				switch (i)
				{
				case 1:
				{
					n1++;
					area = 0;
					para[n1]= Parallelogram("Parallelogram", rand() % 10 + 1, rand() % 10 + 1);
					para[n1].draw();
					L += &para[n1];
					while (area != para[n1].area())
					{
						cout << "请输入面积" << endl;
						cin >> area;
					}
					break;
				}
				case 2:
				{
					n2++;
					area = 0;
					rect[n2]= Rect("Rectangle", rand() % 10 + 1, rand() % 10 + 1);
					rect[n2].draw();
					L += &rect[n2];
					while (area !=rect[n2].area())
					{
						cout << "请输入面积" << endl;
						cin >> area;
					}
					break;
				}
				case 3:
				{
					n3++;
					area = 0;
					dia[n3]=Diamond("Diamond", rand() % 10 + 1, rand() % 10 + 1);
					dia[n3].draw();
					L += &dia[n3];
					while (area != dia[n3].area())
					{
						cout << "请输入面积" << endl;
						cin >> area;
					}
					break;
				}
				case 4:
				{
					area = 0;
					n4++;
					sqr[n4]=Square("Square", rand() % 10 + 1);
					sqr[n4].draw();
					L += &sqr[n4];
					while (area != sqr[n4].area())
					{
						cout << "请输入面积" << endl;
						cin >> area;
					}
					break;
				}
				case 5:
				{
					n5++;
					area = 0;
					tra[n5]=Trapezoid("Trapezoid", rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1);
					tra[n5].draw();
					L += &tra[n5];
					while (area != tra[n5].area())
					{
						cout << "请输入面积" << endl;
						cin >> area;
					}
					break;
				}
				}
			}
			break;
		}
		case 'R':
		{
			L.traverse();
			break;
		}
		case 'N':
		{
			return 0;
			break;
		}
		cout << "*****************************************************" << endl;
		}
	}
	int a;
	cin >> a;
    return 0;
}
