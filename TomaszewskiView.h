// TomaszewskiView.h : interface of the CTomaszewskiView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TOMASZEWSKIVIEW_H__461D6B9A_8C4F_4D39_91F8_372B5A0F390C__INCLUDED_)
#define AFX_TOMASZEWSKIVIEW_H__461D6B9A_8C4F_4D39_91F8_372B5A0F390C__INCLUDED_

#include "Tomaszewski1.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTomaszewskiView : public CView
{
protected: // create from serialization only
	CTomaszewskiView();
	DECLARE_DYNCREATE(CTomaszewskiView)

// Attributes
public:
	CTomaszewskiDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTomaszewskiView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnInitialUpdate();
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	CTomaszewski m_klaw;
	virtual ~CTomaszewskiView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTomaszewskiView)
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnDestroy();
	afx_msg void OnChar(UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
};

#ifndef _DEBUG  // debug version in TomaszewskiView.cpp
inline CTomaszewskiDoc* CTomaszewskiView::GetDocument()
   { return (CTomaszewskiDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TOMASZEWSKIVIEW_H__461D6B9A_8C4F_4D39_91F8_372B5A0F390C__INCLUDED_)
