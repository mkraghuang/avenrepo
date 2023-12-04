
// MFCApplicationTestDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MFCApplicationTest.h"
#include "MFCApplicationTestDlg.h"
#include "afxdialogex.h"
#include <string>
#ifdef _DEBUG
#define new DEBUG_NEW
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


// CMFCApplicationTestDlg dialog



CMFCApplicationTestDlg::CMFCApplicationTestDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCAPPLICATIONTEST_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMFCApplicationTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);

	DDX_Control(pDX, IDC_EDIT2, edit2);
	DDX_Control(pDX, IDC_EDIT1, edit1);
	DDX_Control(pDX, IDC_COMBO2, combo);
	DDX_Control(pDX, IDC_BUTTON13, bt13);
	
}

BEGIN_MESSAGE_MAP(CMFCApplicationTestDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON5, Additionint)
	ON_BN_CLICKED(IDC_BUTTON15, &CMFCApplicationTestDlg::OnBnClickedButton15)
	ON_BN_CLICKED(IDC_BUTTON10, &CMFCApplicationTestDlg::OnBnClickedButton10)
	ON_BN_CLICKED(IDC_BUTTON16, &CMFCApplicationTestDlg::OnBnClickedButton16)
	ON_BN_CLICKED(IDC_BUTTON11, &CMFCApplicationTestDlg::OnBnClickedButton11)
	ON_CBN_SELCHANGE(IDC_COMBO2, &CMFCApplicationTestDlg::OnCbnSelchangeCombo2)
END_MESSAGE_MAP()


// CMFCApplicationTestDlg message handlers

void CMFCApplicationTestDlg::Additionint()
{
	x = 10;
	int ip1 = GetDlgItemInt(IDC_EDIT4);
	int ip2 = GetDlgItemInt(IDC_EDIT5);

	SetDlgItemInt(IDC_EDIT6, ip1 + ip2);
}
BOOL CMFCApplicationTestDlg::OnInitDialog()
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
	combo.AddString(_T("Hello"));
	combo.AddString(_T("Hello11"));
	combo.AddString(_T("Hello22"));

	combo.SetCurSel(1);

	CString temp;
	combo.GetLBText(2, temp);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CMFCApplicationTestDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CMFCApplicationTestDlg::OnPaint()
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
HCURSOR CMFCApplicationTestDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}




//+
void CMFCApplicationTestDlg::OnBnClickedButton14()
{
	// TODO: Add your control notification handler code here
	
	edit2.ShowWindow(SW_HIDE);
}

// =
void CMFCApplicationTestDlg::OnBnClickedButton15()
{
	CString temp;
	CString temp1;
	edit1.GetWindowTextW(temp);
	edit2.GetWindowTextW(temp1);
	temp = temp + temp1 + _T("=");

	edit1.SetWindowTextW(temp);
	edit2.SetWindowTextW(L"");
}


void CMFCApplicationTestDlg::OnBnClickedButton10()
{
	// TODO: Add your control notification handler code here
	edit2.SetWindowTextW(L"1");
}


void CMFCApplicationTestDlg::OnBnClickedButton16()
{
	// TODO: Add your control notification handler code here
	//cut from e2 put it in e1
	CString e2temp;
	edit2.GetWindowText(e2temp);
	edit2.SetWindowTextW(L"");
	
	e2temp = e2temp + _T("+");
	edit1.SetWindowTextW(e2temp);


	

}


void CMFCApplicationTestDlg::OnBnClickedButton11()
{
	// TODO: Add your control notification handler code here
	edit2.SetWindowTextW(L"2");
}


void CMFCApplicationTestDlg::OnCbnSelchangeCombo2()
{
	// TODO: Add your control notification handler code here
	int index = combo.GetCurSel();

	if (index == 2)
	{
		edit2.ShowWindow(SW_HIDE);

		auto button = GetDlgItem(IDC_BUTTON10);
		button->ShowWindow(SW_HIDE);
	}
	else
	{
		edit2.ShowWindow(SW_SHOW);
		auto button = GetDlgItem(IDC_BUTTON10);
		button->ShowWindow(SW_SHOW);
	}
	CString temp;
	combo.GetLBText(index, temp);

	edit1.SetWindowTextW(temp);
}
