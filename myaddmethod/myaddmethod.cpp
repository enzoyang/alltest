// myaddmethod.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "myaddmethod.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ������ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//


// CmyaddmethodApp

BEGIN_MESSAGE_MAP(CmyaddmethodApp, CWinApp)
END_MESSAGE_MAP()


// CmyaddmethodApp ����

CmyaddmethodApp::CmyaddmethodApp()
{
	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CmyaddmethodApp ����

CmyaddmethodApp theApp;


// CmyaddmethodApp ��ʼ��

int add(int a, int b)
{
	return a+b;
}
BOOL CmyaddmethodApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}
