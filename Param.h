#if !defined(AFX_PARAM_H__A910ADC6_E078_4E8C_9303_61E7404E083D__INCLUDED_)
#define AFX_PARAM_H__A910ADC6_E078_4E8C_9303_61E7404E083D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Param.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CParam dialog

class CParam : public CDialog
{
// Construction
public:
	CParam(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CParam)
	enum { IDD = IDD_PARAMETRY };
	CString	m_Size;
	CString	m_Speed;
	CString	m_C1;
	CString	m_C2;
	CString	m_C3;
	CString	m_X;
	CString	m_Y;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CParam)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CParam)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PARAM_H__A910ADC6_E078_4E8C_9303_61E7404E083D__INCLUDED_)
