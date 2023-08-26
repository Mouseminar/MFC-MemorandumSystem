
// MemorandumSystemDlg.h: 头文件
//

#include "CDataInterface.h"

#pragma once


// CMemorandumSystemDlg 对话框
class CMemorandumSystemDlg : public CDialogEx
{
// 构造
public:
	CMemorandumSystemDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MEMORANDUMSYSTEM_DIALOG };
#endif

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
	CListCtrl m_list;
	CDataInterface DataInterface;
	CString strFilePath;
	afx_msg void OnBnClickedButton1();
	void UpdateList();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
//	CString m_id;
	afx_msg void OnBnClickedButton7();
	CString m_find;
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton3();

	bool IsOpen;
};
