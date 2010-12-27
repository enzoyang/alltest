#include "StdAfx.h"
#include "common.h"

int addMethod(int x,int y)
{
	//基本加法
	//return x+y;

	//汇编加法
	_asm
	{
		mov eax,x
		add y,eax
	}
	return y;
}

int subMethod(int x,int y)
{
	//基本减法
	//return x-y;
	
	//汇编减法
	_asm
	{
		mov eax,y
		sub x,eax
	}
	return x;
}
