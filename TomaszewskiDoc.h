// TomaszewskiDoc.h : interface of the CTomaszewskiDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TOMASZEWSKIDOC_H__FF30A378_BCDD_4C14_8AE4_6664FC011F38__INCLUDED_)
#define AFX_TOMASZEWSKIDOC_H__FF30A378_BCDD_4C14_8AE4_6664FC011F38__INCLUDED_

#include "Param.h"	// Added by ClassView
#include "Tomaszewski1.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTomaszewskiDoc : public CDocument
{
protected: // create from serialization only
	CTomaszewskiDoc();
	DECLARE_DYNCREATE(CTomaszewskiDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTomaszewskiDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	CTomaszewski m_symbol;
	virtual ~CTomaszewskiDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTomaszewskiDoc)
	afx_msg void OnSymbolP();
	afx_msg void OnSymbolL();
	afx_msg void OnParametry();
	afx_msg void OnZmienNie();
	afx_msg void OnZmienTak();
	afx_msg void OnUpdateZmienTak(CCmdUI* pCmdUI);
	afx_msg void OnUpdateZmienNie(CCmdUI* pCmdUI);
	afx_msg void OnSymbolStop();
	afx_msg void OnSymbolG();
	afx_msg void OnSymbolD();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CParam m_param;

};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TOMASZEWSKIDOC_H__FF30A378_BCDD_4C14_8AE4_6664FC011F38__INCLUDED_)
