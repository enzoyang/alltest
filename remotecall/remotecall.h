// remotecall.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CremotecallApp:
// �йش����ʵ�֣������ remotecall.cpp
//

class CremotecallApp : public CWinApp
{
public:
	CremotecallApp();

// ��д
	public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CremotecallApp theApp;