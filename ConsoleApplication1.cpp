// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cout <<"����һ�������¶ȣ�"<<endl<<"f="<<endl;
	cin >>f;
	c=fun1(f);
	cout <<"��Ӧ�������¶���C="<<c<<endl;
	cout <<"����һ�������¶ȣ�"<<endl<<"c="<<endl;
	cin >>c;
	f=fun2(c);
	cout <<"��Ӧ�Ļ����¶���f="<<f<<endl;
	return 0;
}
