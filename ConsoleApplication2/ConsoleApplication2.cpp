// ConsoleApplication2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;

class Cfeet
{
	int feet;
	int inch;
public:
	Cfeet();
	Cfeet(int a, int b);
	int setfeet(int a,int b);
	void disPaly();
};

Cfeet::Cfeet()
{
}
Cfeet::Cfeet(int a, int b)
{
	feet = a;
	inch = b;
}
int Cfeet::setfeet(int a,int b)
{
	feet = a;
	inch = b;
	for (feet=0;inch>=12;feet++)
	{
		inch = inch - 12;
	}
	return 0;
}
void Cfeet::disPaly()
{
	cout<< "disPlay feet=" << feet << "inch=" << inch << endl;
}
int main()
{
	Cfeet od;
	od.setfeet(0,36);
	od.disPaly();
}
