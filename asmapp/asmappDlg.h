// asmappDlg.h : ͷ�ļ�
//

#pragma once


// CasmappDlg �Ի���
class CasmappDlg : public CDialog
{
// ����
public:
	CasmappDlg(CWnd* pParent = NULL);	// ��׼���캯��

// �Ի�������
	enum { IDD = IDD_ASMAPP_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV ֧��


// ʵ��
protected:
	HICON m_hIcon;

	// ���ɵ���Ϣӳ�亯��
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	int m_a;
public:
	int m_b;
public:
	int m_add;
public:
	int m_c;
public:
	int m_d;
public:
	int m_sub;
};
