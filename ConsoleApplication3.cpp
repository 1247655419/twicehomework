// ConsoleApplication3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
#include <iostream>
using namespace std;
double fun (float x,int y)
{
	if (y==0)
		return 1;
	else return x*fun(x,y-1);
}
int main()
{
	double ans;
	float x;
	int y;
	cout<<"input two numbers:"<<endl;
	cin>>x>>y;
	ans =fun(x,y);
	cout<<"x^y's answer is x^y=:"<<ans<<endl;
	return 0;
}

