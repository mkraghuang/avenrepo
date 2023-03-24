
// CalculatorABDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "CalculatorAB.h"
#include "CalculatorABDlg.h"
#include "afxdialogex.h"
//#include <afxwin.h>
//#include <Windows.h>
//#include "Resource.h"


#include <iostream>
//#include <cmath>


#ifdef _DEBUG
#define new DEBUG_NEW
#define GetWindowTextW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
} 

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CCalculatorABDlg dialog



CCalculatorABDlg::CCalculatorABDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATORAB_DIALOG, pParent)

	, EditInput(_T(""))
{

	number1 = number2 = number =0;
	str1= _T("");
	str2= _T("");
	Flag = true;
	opper = 0;

	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalculatorABDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	//DDX_Control(pDX, IDC_EDIT_INPUT, Edit_Input);
	DDX_Text(pDX, IDC_EDIT_INPUT, EditInput);
}

BEGIN_MESSAGE_MAP(CCalculatorABDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON01, &CCalculatorABDlg::OnBnClickedButton01)
	ON_BN_CLICKED(IDC_BUTTON02, &CCalculatorABDlg::OnBnClickedButton02)
	ON_BN_CLICKED(IDC_BUTTON03, &CCalculatorABDlg::OnBnClickedButton03)
	ON_BN_CLICKED(IDC_BUTTON04, &CCalculatorABDlg::OnBnClickedButton04)
	ON_BN_CLICKED(IDC_BUTTON05, &CCalculatorABDlg::OnBnClickedButton05)
	ON_BN_CLICKED(IDC_BUTTON06, &CCalculatorABDlg::OnBnClickedButton06)
	ON_BN_CLICKED(IDC_BUTTON07, &CCalculatorABDlg::OnBnClickedButton07)
	ON_BN_CLICKED(IDC_BUTTON08, &CCalculatorABDlg::OnBnClickedButton08)
	ON_BN_CLICKED(IDC_BUTTON09, &CCalculatorABDlg::OnBnClickedButton09)
	ON_BN_CLICKED(IDC_BUTTON_POINT, &CCalculatorABDlg::OnBnClickedButtonPoint)
	ON_BN_CLICKED(IDC_BUTTON00, &CCalculatorABDlg::OnBnClickedButton00)
	ON_BN_CLICKED(IDC_BUTTON_EQUAL, &CCalculatorABDlg::OnBnClickedButtonEqual)
	ON_BN_CLICKED(IDC_BUTTON_PLUS, &CCalculatorABDlg::OnBnClickedButtonPlus)
	ON_BN_CLICKED(IDC_BUTTON_MINUS, &CCalculatorABDlg::OnBnClickedButtonMinus)
	ON_BN_CLICKED(IDC_BUTTON_MULTIPLE, &CCalculatorABDlg::OnBnClickedButtonMultiple)
	ON_BN_CLICKED(IDC_BUTTON_DIVIDE, &CCalculatorABDlg::OnBnClickedButtonDivide)
END_MESSAGE_MAP()


// CCalculatorABDlg message handlers

BOOL CCalculatorABDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCalculatorABDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCalculatorABDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		                   // Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		                   // Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCalculatorABDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


//public:
	/*void CCalculatorABDlg::CCalculatorABfun()
	{
		//Create(NULL, _T("CalculatorAB"));
		Edit_Input.Create(WS_CHILD | WS_VISIBLE | ES_RIGHT,
			CRect(5, 5, 295, 25), this, 1);
		m_fNumber1 = m_fNumber2 = m_fResult = 0.0f;
		m_nOperator = 0;
	}*/





void CCalculatorABDlg::OnBnClickedButton01()
{
	// TODO: Add your control notification handler code here
	//Edit_Input.SetWindowText(Edit_Input.GetWindowText() + _T("1"));
	if (Flag == true)
	{
		str1 += _T("1");
		EditInput = str1;
	}
	else
	{
		str2 += _T("1");
		EditInput = str2;
	}
	
	UpdateData(FALSE);
}


void CCalculatorABDlg::OnBnClickedButton02()
{
	// TODO: Add your control notification handler code hereif (Flag == true)
	if (Flag == true)
	{
		str1 += _T("2");
		EditInput = str1;
	}
	else
	{
		str2 += _T("2");
		EditInput = str2;
	}	
	UpdateData(FALSE);
	
}


void CCalculatorABDlg::OnBnClickedButton03()
{
	// TODO: Add your control notification handler code here
	if (Flag == true)
	{
		str1 += _T("3");
		EditInput = str1;
	}
	else
	{
		str2 += _T("3");
		EditInput = str2;
	}
	UpdateData(FALSE);
}


void CCalculatorABDlg::OnBnClickedButton04()
{
	// TODO: Add your control notification handler code here
	if (Flag == true)
	{
		str1 += _T("4");
		EditInput = str1;
	}
	else
	{
		str2 += _T("4");
		EditInput = str2;
	}
	UpdateData(FALSE);
}


void CCalculatorABDlg::OnBnClickedButton05()
{
	// TODO: Add your control notification handler code here
	if (Flag == true)
	{
		str1 += _T("5");
		EditInput = str1;
	}
	else
	{
		str2 += _T("5");
		EditInput = str2;
	}
	UpdateData(FALSE);
}


void CCalculatorABDlg::OnBnClickedButton06()
{
	// TODO: Add your control notification handler code here
	if (Flag == true)
	{
		str1 += _T("6");
		EditInput = str1;
	}
	else
	{
		str2 += _T("6");
		EditInput = str2;
	}
	UpdateData(FALSE);
}


void CCalculatorABDlg::OnBnClickedButton07()
{
	// TODO: Add your control notification handler code here
	if (Flag == true)
	{
		str1 += _T("7");
		EditInput = str1;
	}
	else
	{
		str2 += _T("7");
		EditInput = str2;
	}
	UpdateData(FALSE);
}


void CCalculatorABDlg::OnBnClickedButton08()
{
	// TODO: Add your control notification handler code here
	if (Flag == true)
	{
		str1 += _T("8");
		EditInput = str1;
	}
	else
	{
		str2 += _T("8");
		EditInput = str2;
	}
	UpdateData(FALSE);
}


void CCalculatorABDlg::OnBnClickedButton09()
{
	// TODO: Add your control notification handler code here
	if (Flag == true)
	{
		str1 += _T("9");
		EditInput = str1;
	}
	else
	{
		str2 += _T("9");
		EditInput = str2;
	}
	UpdateData(FALSE);
}


void CCalculatorABDlg::OnBnClickedButtonPoint()
{
	// TODO: Add your control notification handler code here

	if (Flag == true)
	{
		str1 += _T(".");
		EditInput = str1;
	}
	else
	{
		str2 += _T(".");
		EditInput = str2;
	}
	UpdateData(FALSE);

}


void CCalculatorABDlg::OnBnClickedButton00()
{
	// TODO: Add your control notification handler code here
	if (Flag == true)
	{
		str1 += _T("0");
		EditInput = str1;
	}
	else
	{
		str2 += _T("0");
		EditInput = str2;
	}
	UpdateData(FALSE);
}


void CCalculatorABDlg::OnBnClickedButtonEqual()
{
	// TODO: Add your control notification handler code here
	if (EditInput != _T(""))
	{
		number2 = _ttof(EditInput);
		Flag = !Flag;
		EditInput = _T("");
		
	}

	if (opper == 1)
	{
		number = number1 + number2;
	}

	if (opper == 2)
	{
		number = number1 - number2;
	}

	if (opper == 3)
	{
		number = number1 * number2;
	}

	if (opper == 4)
	{
		number = number1 / number2;
	}
	EditInput.Format(_T("%.3f"),number);
	UpdateData(FALSE);
	str1 = _T("");
	str2 = _T("");
	
}


void CCalculatorABDlg::OnBnClickedButtonPlus()
{
	// TODO: Add your control notification handler code here

	if (EditInput != _T(""))
	{
		number1 = _ttof(EditInput);
		Flag = !Flag;
		EditInput = _T("");
		opper = 1;

		
	}

}


void CCalculatorABDlg::OnBnClickedButtonMinus()
{
	// TODO: Add your control notification handler code here

	if (EditInput != _T(""))
	{
		number1 = _ttof(EditInput);
		Flag = !Flag;
		EditInput = _T("");
		opper = 2;


	}
}


void CCalculatorABDlg::OnBnClickedButtonMultiple()
{
	// TODO: Add your control notification handler code here

	if (EditInput != _T(""))
	{
		number1 = _ttof(EditInput);
		Flag = !Flag;
		EditInput = _T("");
		opper = 3;


	}
}


void CCalculatorABDlg::OnBnClickedButtonDivide()
{
	// TODO: Add your control notification handler code here

	if (EditInput != _T(""))
	{
		number1 = _ttof(EditInput);
		Flag = !Flag;
		EditInput = _T("");
		opper = 4;


	}
}
