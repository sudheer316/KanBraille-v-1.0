// Thejasvi.h : main header file for the THEJASVI application
//

#if !defined(AFX_THEJASVI_H__B4D88197_7212_4E2B_AC4F_6D11566ADB98__INCLUDED_)
#define AFX_THEJASVI_H__B4D88197_7212_4E2B_AC4F_6D11566ADB98__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CThejasviApp:
// See Thejasvi.cpp for the implementation of this class
//

class CThejasviApp : public CWinApp
{
public:
	CThejasviApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CThejasviApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CThejasviApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_THEJASVI_H__B4D88197_7212_4E2B_AC4F_6D11566ADB98__INCLUDED_)
