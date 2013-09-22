// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include <iostream>
float fun1(float f)
{
	float c;
	c=5/9.0*(f-32.0);
	return c;
}
float fun2(float c)
{
	float f;
	f=9.0/5*c+32;
	return f;
}
using namespace std;
int main()
{
	float f,c;
	cout <<"输入一个华氏温度："<<endl<<"f="<<endl;
	cin >>f;
	c=fun1(f);
	cout <<"相应的摄氏温度是C="<<c<<endl;
	cout <<"输入一个摄氏温度："<<endl<<"c="<<endl;
	cin >>c;
	f=fun2(c);
	cout <<"相应的华氏温度是f="<<f<<endl;
	return 0;
}
