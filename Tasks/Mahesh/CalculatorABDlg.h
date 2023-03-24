
// CalculatorABDlg.h : header file
//

#pragma once
#include <afxwin.h>
#include <iostream>
#include <cmath>


// CCalculatorABDlg dialog
class CCalculatorABDlg : public CDialogEx
{
// Construction
public:
	CCalculatorABDlg(CWnd* pParent = nullptr);	// standard constructor


// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCULATORAB_DIALOG };
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




	afx_msg void OnBnClickedButton01();
	afx_msg void OnBnClickedButton02();
	afx_msg void OnBnClickedButton03();
	afx_msg void OnBnClickedButton04();
	afx_msg void OnBnClickedButton05();
	afx_msg void OnBnClickedButton06();
	afx_msg void OnBnClickedButton07();
	afx_msg void OnBnClickedButton08();
	afx_msg void OnBnClickedButton09();
	afx_msg void OnBnClickedButtonPoint();
	afx_msg void OnBnClickedButton00();
	afx_msg void OnBnClickedButtonEqual();
	afx_msg void OnBnClickedButtonPlus();
	afx_msg void OnBnClickedButtonMinus();
	afx_msg void OnBnClickedButtonMultiple();
	afx_msg void OnBnClickedButtonDivide();


private:
	/*float m_fNumber1, m_fNumber2, m_fResult;
	int m_nOperator;
	//CEdit m_wndEdit;*/

	CEdit Edit_Input;
	//CString Edit_Input;

public:
	//void CCalculatorABfun()

	float number1, number2,number;
	CString str1, str2;
	CString EditInput;
	bool Flag;
	int opper;
};
