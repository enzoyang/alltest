// myaddmethodtest.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CmyaddmethodtestApp:
// �йش����ʵ�֣������ myaddmethodtest.cpp
//

class CmyaddmethodtestApp : public CWinApp
{
public:
	CmyaddmethodtestApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CmyaddmethodtestApp theApp;