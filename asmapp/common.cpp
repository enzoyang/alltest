#include "StdAfx.h"
#include "common.h"

int addMethod(int x,int y)
{
	//�����ӷ�
	//return x+y;

	//���ӷ�
	_asm
	{
		mov eax,x
		add y,eax
	}
	return y;
}

int subMethod(int x,int y)
{
	//��������
	//return x-y;
	
	//������
	_asm
	{
		mov eax,y
		sub x,eax
	}
	return x;
}
