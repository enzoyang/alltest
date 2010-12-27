// asmappDlg.h : 头文件
//

#pragma once


// CasmappDlg 对话框
class CasmappDlg : public CDialog
{
// 构造
public:
	CasmappDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_ASMAPP_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
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
