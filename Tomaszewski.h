// Tomaszewski.h : main header file for the TOMASZEWSKI application
//

#if !defined(AFX_TOMASZEWSKI_H__DB8963C7_BA1A_427F_9927_C42E4A3ACF01__INCLUDED_)
#define AFX_TOMASZEWSKI_H__DB8963C7_BA1A_427F_9927_C42E4A3ACF01__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTomaszewskiApp:
// See Tomaszewski.cpp for the implementation of this class
//

class CTomaszewskiApp : public CWinApp
{
public:
	CTomaszewskiApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTomaszewskiApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTomaszewskiApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TOMASZEWSKI_H__DB8963C7_BA1A_427F_9927_C42E4A3ACF01__INCLUDED_)
