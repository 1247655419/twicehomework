// ConsoleApplication2.cpp :
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

#include <iostream>
using namespace std;
int fun (int x)
{
	if (x==0)
		return 1;
	else
	return (x==1)?1:x*fun(x-1);
}
int main()
{
	int m,n,ans;
	cin>>m>>n;
	if (n>m)
		cout<<"error!"<<endl;
	ans=fun (m)/(fun(m-n)*fun(n));
	cout <<"The answer is :"<<ans<<endl;
	return 0;
}
	
		


