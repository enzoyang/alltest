// myaddmethod.h : myaddmethod DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CmyaddmethodApp
// �йش���ʵ�ֵ���Ϣ������� myaddmethod.cpp
//

class CmyaddmethodApp : public CWinApp
{
public:
	CmyaddmethodApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
