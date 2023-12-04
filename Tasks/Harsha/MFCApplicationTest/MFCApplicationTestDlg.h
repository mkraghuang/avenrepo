
// MFCApplicationTestDlg.h : header file
//

#pragma once

/*
* oninitdialog
* dodataexchange
* messagemap
*/
#include <cstring>
// CMFCApplicationTestDlg dialog
class CMFCApplicationTestDlg : public CDialogEx
{
// Construction
	int x;
	CEdit edit2;
	CEdit edit1;
	CString sedit2;
	CButton bt13;
	CComboBox combo;
	CListBox list;
public:
	CMFCApplicationTestDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATIONTEST_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	 void Additionint();
	 afx_msg void OnBnClickedButton14();
	 afx_msg void OnBnClickedButton15();
	 afx_msg void OnBnClickedButton10();
	 afx_msg void OnBnClickedButton16();
	 afx_msg void OnBnClickedButton11();
	 afx_msg void OnCbnSelchangeCombo2();
};
