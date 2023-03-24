
// Radiobutton.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CRadiobuttonApp:
// See Radiobutton.cpp for the implementation of this class
//

class CRadiobuttonApp : public CWinApp
{
public:
	CRadiobuttonApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CRadiobuttonApp theApp;