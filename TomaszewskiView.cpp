// TomaszewskiView.cpp : implementation of the CTomaszewskiView class
//

#include "stdafx.h"
#include "Tomaszewski.h"

#include "TomaszewskiDoc.h"
#include "TomaszewskiView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTomaszewskiView

IMPLEMENT_DYNCREATE(CTomaszewskiView, CView)

BEGIN_MESSAGE_MAP(CTomaszewskiView, CView)
	//{{AFX_MSG_MAP(CTomaszewskiView)
	ON_WM_TIMER()
	ON_WM_DESTROY()
	ON_WM_CHAR()
	ON_WM_RBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTomaszewskiView construction/destruction

CTomaszewskiView::CTomaszewskiView()
{
	// TODO: add construction code here

}

CTomaszewskiView::~CTomaszewskiView()
{
}

BOOL CTomaszewskiView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTomaszewskiView drawing

void CTomaszewskiView::OnDraw(CDC* pDC)
{
	CTomaszewskiDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CRect aRect;
	GetClientRect(&aRect);
	pDoc->m_symbol.RysujSymbol(*pDC, aRect);
}

/////////////////////////////////////////////////////////////////////////////
// CTomaszewskiView printing

BOOL CTomaszewskiView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTomaszewskiView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTomaszewskiView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CTomaszewskiView diagnostics

#ifdef _DEBUG
void CTomaszewskiView::AssertValid() const
{
	CView::AssertValid();
}

void CTomaszewskiView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTomaszewskiDoc* CTomaszewskiView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTomaszewskiDoc)));
	return (CTomaszewskiDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTomaszewskiView message handlers

void CTomaszewskiView::OnInitialUpdate() 
{
	CView::OnInitialUpdate();
	
	// TODO: Add your specialized code here and/or call the base class
	SetTimer(1,20,0);
	
}

void CTomaszewskiView::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	
		CClientDC aDC(this);	// definicja kontekstu urzadzenia po za metoda OnDraw
		CRect aRect;
		GetClientRect(&aRect);
		CTomaszewskiDoc* pDoc = GetDocument();
		//---------------------------------------------
		CDC mDC;
		mDC.CreateCompatibleDC(&aDC);
		CBitmap* pMap = new CBitmap;
		pMap->CreateCompatibleBitmap(&aDC,aRect.Width(),aRect.Height());
		CBitmap* pOldMap = mDC.SelectObject(pMap);
		mDC.Rectangle(0,0,aRect.right,aRect.bottom);
		//----------------------------------------------
		pDoc->m_symbol.GenerujSymbol(aRect);
		pDoc->m_symbol.RysujSymbol(mDC,aRect);
		aDC.BitBlt(0,0,aRect.Width(),aRect.Height(), &mDC,0,0,SRCCOPY);
		//----------------------------------------------
		mDC.SelectObject(pOldMap);
		delete pMap;
		//----------------------------------------------
		aDC.SetMapMode(MM_ANISOTROPIC);	// ustawienie trybu odwzorowywania
		aDC.SetViewportExt(aRect.Width(),aRect.Height()); // Pobranie rozmarów obszaru wyswietlania, automatycznie zostje pobrana rozdzielczosc
		aDC.SetWindowExt(800,600); //logiczny pulpit
		aDC.DPtoLP(&aRect); //przelicznie z rozmariu fizczycznego do logicznego
	
	CView::OnTimer(nIDEvent);
	//---------------------------------------------
}

void CTomaszewskiView::OnDestroy() 
{
	CView::OnDestroy();
	
	// TODO: Add your message handler code here
	KillTimer(1); //parametrem jest identyfikator zegara
	
}



void CTomaszewskiView::OnChar(UINT nChar, UINT nRepCnt, UINT nFlags) 
{
	// TODO: Add your message handler code here and/or call default
	
	CTomaszewskiDoc* pDoc=GetDocument();
	pDoc->m_symbol.m_klawisz = nChar;
	//----------------------------------
	CView::OnChar(nChar, nRepCnt, nFlags);
}

void CTomaszewskiView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	CMenu aMenu;
 	aMenu.LoadMenu(IDR_SYMBOL_MENU);
 	ClientToScreen(&point);
 	aMenu.GetSubMenu(0)->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, this);

	CView::OnRButtonDown(nFlags, point);
}
