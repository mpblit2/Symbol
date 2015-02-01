// TomaszewskiDoc.cpp : implementation of the CTomaszewskiDoc class
//

#include "stdafx.h"
#include "Tomaszewski.h"

#include "TomaszewskiDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTomaszewskiDoc

IMPLEMENT_DYNCREATE(CTomaszewskiDoc, CDocument)

BEGIN_MESSAGE_MAP(CTomaszewskiDoc, CDocument)
	//{{AFX_MSG_MAP(CTomaszewskiDoc)
	ON_COMMAND(ID_SYMBOL_P, OnSymbolP)
	ON_COMMAND(ID_SYMBOL_L, OnSymbolL)
	ON_COMMAND(ID_PARAMETRY, OnParametry)
	ON_COMMAND(ID_ZMIEN_NIE, OnZmienNie)
	ON_COMMAND(ID_ZMIEN_TAK, OnZmienTak)
	ON_UPDATE_COMMAND_UI(ID_ZMIEN_TAK, OnUpdateZmienTak)
	ON_UPDATE_COMMAND_UI(ID_ZMIEN_NIE, OnUpdateZmienNie)
	ON_COMMAND(ID_SYMBOL_STOP, OnSymbolStop)
	ON_COMMAND(ID_SYMBOL_G, OnSymbolG)
	ON_COMMAND(ID_SYMBOL_D, OnSymbolD)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTomaszewskiDoc construction/destruction

CTomaszewskiDoc::CTomaszewskiDoc()
{
	// TODO: add one-time construction code here

}

CTomaszewskiDoc::~CTomaszewskiDoc()
{
}

BOOL CTomaszewskiDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTomaszewskiDoc serialization

void CTomaszewskiDoc::Serialize(CArchive& ar)
{
	
	m_symbol.Serialize(ar);
	//---------------------
	if (ar.IsStoring())
	{
		// TODO: add storing code here		
	}
	else
	{
		// TODO: add loading code here		
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTomaszewskiDoc diagnostics

#ifdef _DEBUG
void CTomaszewskiDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTomaszewskiDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTomaszewskiDoc commands

void CTomaszewskiDoc::OnSymbolG() 
{
	// TODO: Add your command handler code here
	m_symbol.m_klawisz='g';
}

void CTomaszewskiDoc::OnSymbolD()
{
	// TODO: Add your command handler code here
	m_symbol.m_klawisz='d';
}

void CTomaszewskiDoc::OnSymbolP() 
{
	// TODO: Add your command handler code here
	m_symbol.m_klawisz='p';
	
}

void CTomaszewskiDoc::OnSymbolL() 
{
	// TODO: Add your command handler code here
	m_symbol.m_klawisz='l';
}

void CTomaszewskiDoc::OnSymbolStop() 
{
	// TODO: Add your command handler code here
	m_symbol.m_klawisz='s';
}

void CTomaszewskiDoc::OnParametry() 
{
	// TODO: Add your command handler code here
	double* pSize = 0;
	double* pSpeed = 0;
	int* pTabColor = 0;
	int* pX = 0;
	int* pY = 0;
	char bufor[5];
	pSize = m_symbol.DajSize();
	_gcvt(pSize[0],5,bufor);
	m_param.m_Size = bufor;
	
	pSpeed = m_symbol.DajSpeed();
	_gcvt(pSpeed[0],5,bufor);
	m_param.m_Speed = bufor;

	pTabColor = m_symbol.DajColor();
	_gcvt(pTabColor[0],5,bufor);
	m_param.m_C1 = bufor;
	_gcvt(pTabColor[1],5,bufor);
	m_param.m_C2 = bufor;
	_gcvt(pTabColor[2],5,bufor);
	m_param.m_C3 = bufor;

	if(m_symbol.m_klawisz == 's')
	{
		pX = m_symbol.DajPolozenieX();
		_gcvt(pX[0],5,bufor);
		m_param.m_X = bufor;

		pY = m_symbol.DajPolozenieY();
		_gcvt(pY[0],5,bufor);
		m_param.m_Y = bufor;
	}
	//----------------------------
	delete pSize;
	delete pSpeed;
	delete pTabColor;
	delete pX;
	delete pY;
	//----------------------------
	m_param.DoModal();//wywolanie okna
	if(IDOK)
	{
		double Size=atof(m_param.m_Size);
		double Speed=atof(m_param.m_Speed);
		m_symbol.UstawSize(Size);
		m_symbol.UstawSpeed(Speed);

		int C1 = atoi(m_param.m_C1);
		int C2 = atoi(m_param.m_C2);
		int C3 = atoi(m_param.m_C3);
		m_symbol.UstawColor(C1, C2, C3);

		int X = atoi(m_param.m_X);
		int Y = atoi(m_param.m_Y);
		m_symbol.UstawPolozenie(X, Y);
	}
}

void CTomaszewskiDoc::OnZmienNie() 
{
	// TODO: Add your command handler code here
	if(m_symbol.m_bZmien) m_symbol.m_bZmien=FALSE;
}

void CTomaszewskiDoc::OnZmienTak() 
{
	// TODO: Add your command handler code here
	if(!m_symbol.m_bZmien) m_symbol.m_bZmien=TRUE;
}

void CTomaszewskiDoc::OnUpdateZmienTak(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->SetCheck(m_symbol.m_bZmien);	
}

void CTomaszewskiDoc::OnUpdateZmienNie(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	pCmdUI->SetCheck(!m_symbol.m_bZmien);	
	
}

