// asmcall.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CasmcallApp:
// �йش����ʵ�֣������ asmcall.cpp
//

class CasmcallApp : public CWinApp
{
public:
	CasmcallApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CasmcallApp theApp;