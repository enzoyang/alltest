// inlineasm.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int add(int x,int y)
{
	_asm
	{
		mov eax,x //eax = x
		add y,eax //y = y + eax
	}
	return y;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int x,y,sum;
	cout << "plz input x:" << endl;
	cin >> x;
	cout << "plz input y:" << endl;
	cin >> y;
	sum = add(x,y);
	cout << "the sum is " << sum << endl;
	
	system("PAUSE");
	return 0;
}

