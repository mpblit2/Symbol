// Param.cpp : implementation file
//

#include "stdafx.h"
#include "Tomaszewski.h"
#include "Param.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CParam dialog


CParam::CParam(CWnd* pParent /*=NULL*/)
	: CDialog(CParam::IDD, pParent)
{
	//{{AFX_DATA_INIT(CParam)
	m_Size = _T("3");
	m_Speed = _T("3");
	m_C1 = _T("0");
	m_C2 = _T("0");
	m_C3 = _T("0");
	m_X = _T("0");
	m_Y = _T("0");
	//}}AFX_DATA_INIT
}


void CParam::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CParam)
	DDX_CBString(pDX, IDC_SYMBOL_SIZE, m_Size);
	DDV_MaxChars(pDX, m_Size, 2);
	DDX_CBString(pDX, IDC_SYMBOL_SPEED, m_Speed);
	DDV_MaxChars(pDX, m_Speed, 2);
	DDX_CBString(pDX, IDC_COLOR_C1, m_C1);
	DDV_MaxChars(pDX, m_C1, 4);
	DDX_CBString(pDX, IDC_COLOR_C2, m_C2);
	DDV_MaxChars(pDX, m_C2, 4);
	DDX_CBString(pDX, IDC_COLOR_C3, m_C3);
	DDV_MaxChars(pDX, m_C3, 4);
	DDX_CBString(pDX, IDC_POLOZENIE_X, m_X);
	DDV_MaxChars(pDX, m_X, 4);
	DDX_CBString(pDX, IDC_POLOZENIE_Y, m_Y);
	DDV_MaxChars(pDX, m_Y, 4);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CParam, CDialog)
	//{{AFX_MSG_MAP(CParam)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CParam message handlers
