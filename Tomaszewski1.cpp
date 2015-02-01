// Tomaszewski1.cpp: implementation of the CTomaszewski class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Tomaszewski.h"
#include "Tomaszewski1.h"
#include "math.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

//--------------------------------------
IMPLEMENT_SERIAL(CTomaszewski,CObject,1)
//--------------------------------------


CTomaszewski::CTomaszewski()
{
	m_colors[0]=1, m_colors[1]=1, m_colors[2]=1;
	m_base_x=400;
	m_base_y=200;
	m_size=1, m_size=2;
	m_speed=1;
	m_bZmien = FALSE;
	m_klawisz = 's';
}

CTomaszewski::~CTomaszewski()
{

}


void CTomaszewski::RysujSymbol(CDC &aDC, CRect &aRect)
{
	CPen pioro,pioro1;
	pioro.CreatePen(PS_SOLID,2,RGB(m_colors[0],m_colors[1],m_colors[2]));
	pioro1.CreatePen(PS_SOLID,2,RGB(255,255,255));
		

	CBrush pedzel;
	pedzel.CreateSolidBrush (RGB(255,255,255));


	CPen* pOldPen;
	CBrush* pOldBrush;
	
	
	pOldPen=aDC.SelectObject(&pioro);
	pOldBrush=aDC.SelectObject(&pedzel);
	
	/* Rysowanie symbolu */  
	aDC.SelectObject(pedzel);
	aDC.SelectObject(pioro);
	
	//Rysowanie okregow
	aDC.Ellipse(m_base_x+20*m_size,m_base_y-25*m_size,m_base_x+70*m_size,m_base_y+25*m_size);
	aDC.Ellipse(m_base_x-70*m_size,m_base_y-25*m_size,m_base_x-20*m_size,m_base_y+25*m_size);

	aDC.SelectObject(pioro1);
	aDC.SelectObject(pedzel);

	//przykrywanie okregow
	aDC.Rectangle(m_base_x-45*m_size,m_base_y-25*m_size,m_base_x-20*m_size,m_base_y+25*m_size);				
	aDC.Rectangle(m_base_x+20*m_size,m_base_y-25*m_size,m_base_x+45*m_size,m_base_y+25*m_size); 
	
	aDC.SelectObject(pioro);
	
	//-----------------------------------------------
	// Lewa czesc symbolu
	//-----------------------------------------------
	aDC.MoveTo(m_base_x-45*m_size,m_base_y-25*m_size);
	aDC.LineTo(m_base_x-33*m_size,m_base_y-25*m_size);
 
	aDC.MoveTo(m_base_x-45*m_size,m_base_y+25*m_size);
	aDC.LineTo(m_base_x-33*m_size,m_base_y+25*m_size);

	aDC.MoveTo(m_base_x-45*m_size,m_base_y-38*m_size);
	aDC.LineTo(m_base_x-45*m_size,m_base_y+38*m_size);
	
	//Linia pozioma od diody
	aDC.MoveTo(m_base_x-55*m_size,m_base_y+10*m_size);
	aDC.LineTo(m_base_x-35*m_size,m_base_y+10*m_size);
	
	// Rysowanie diody
	aDC.MoveTo(m_base_x-45*m_size,m_base_y+10*m_size);
	aDC.LineTo(m_base_x-55*m_size,m_base_y-10*m_size);
	aDC.MoveTo(m_base_x-45*m_size,m_base_y+10*m_size);
	aDC.LineTo(m_base_x-35*m_size,m_base_y-10*m_size);
	aDC.MoveTo(m_base_x-55*m_size,m_base_y-10*m_size);
	aDC.LineTo(m_base_x-35*m_size,m_base_y-10*m_size);
	
	//------------------------------------------------
	// Prawa czesc symbolu
	//------------------------------------------------
	aDC.MoveTo(m_base_x+45*m_size,m_base_y-25*m_size);
	aDC.LineTo(m_base_x+33*m_size,m_base_y-25*m_size);
	aDC.MoveTo(m_base_x+45*m_size,m_base_y+25*m_size);
	aDC.LineTo(m_base_x+33*m_size,m_base_y+25*m_size);
	aDC.MoveTo(m_base_x+45*m_size,m_base_y-38*m_size);
	aDC.LineTo(m_base_x+45*m_size,m_base_y+38*m_size);
	aDC.MoveTo(m_base_x+55*m_size,m_base_y+10*m_size);
	aDC.LineTo(m_base_x+35*m_size,m_base_y+10*m_size);
	
	// Rysowanie diody
	aDC.MoveTo(m_base_x+45*m_size,m_base_y+10*m_size);
	aDC.LineTo(m_base_x+55*m_size,m_base_y-10*m_size);
	aDC.MoveTo(m_base_x+45*m_size,m_base_y+10*m_size);
	aDC.LineTo(m_base_x+35*m_size,m_base_y-10*m_size);
	aDC.MoveTo(m_base_x+55*m_size,m_base_y-10*m_size);
	aDC.LineTo(m_base_x+35*m_size,m_base_y-10*m_size);

	//-----------------------------------------------
	// Rysowanie strzalek
	//-----------------------------------------------
	aDC.MoveTo(m_base_x-30*m_size,m_base_y-5*m_size);
	aDC.LineTo(m_base_x-15*m_size,m_base_y-5*m_size);
	aDC.MoveTo(m_base_x-30*m_size,m_base_y+5*m_size);
	aDC.LineTo(m_base_x-15*m_size,m_base_y+5*m_size);
	aDC.MoveTo(m_base_x-5*m_size,m_base_y-5*m_size);
	aDC.LineTo(m_base_x-15*m_size,m_base_y-8*m_size);

	aDC.MoveTo(m_base_x-5*m_size,m_base_y-5*m_size);
	aDC.LineTo(m_base_x-15*m_size,m_base_y-3*m_size);
	aDC.MoveTo(m_base_x-15*m_size,m_base_y-8*m_size);
	aDC.LineTo(m_base_x-15*m_size,m_base_y-3*m_size);

	aDC.MoveTo(m_base_x-5*m_size,m_base_y+5*m_size);
	aDC.LineTo(m_base_x-15*m_size,m_base_y+8*m_size);
	aDC.MoveTo(m_base_x-5*m_size,m_base_y+5*m_size);
	aDC.LineTo(m_base_x-15*m_size,m_base_y+3*m_size);
	aDC.MoveTo(m_base_x-15*m_size,m_base_y+8*m_size);
	aDC.LineTo(m_base_x-15*m_size,m_base_y+3*m_size);

	aDC.MoveTo(m_base_x+5*m_size,m_base_y-5*m_size);
	aDC.LineTo(m_base_x+20*m_size,m_base_y-5*m_size);

	aDC.MoveTo(m_base_x+5*m_size,m_base_y+5*m_size);
	aDC.LineTo(m_base_x+20*m_size,m_base_y+5*m_size);
	
	aDC.MoveTo(m_base_x+30*m_size,m_base_y-5*m_size);
	aDC.LineTo(m_base_x+20*m_size,m_base_y-8*m_size);

	aDC.MoveTo(m_base_x+30*m_size,m_base_y-5*m_size);
	aDC.LineTo(m_base_x+20*m_size,m_base_y-3*m_size);
	aDC.MoveTo(m_base_x+20*m_size,m_base_y-8*m_size);
	aDC.LineTo(m_base_x+20*m_size,m_base_y-3*m_size);

	aDC.MoveTo(m_base_x+30*m_size,m_base_y+5*m_size);
	aDC.LineTo(m_base_x+20*m_size,m_base_y+8*m_size);
	aDC.MoveTo(m_base_x+30*m_size,m_base_y+5*m_size);
	aDC.LineTo(m_base_x+20*m_size,m_base_y+3*m_size);
	aDC.MoveTo(m_base_x+20*m_size,m_base_y+8*m_size);
	aDC.LineTo(m_base_x+20*m_size,m_base_y+3*m_size);

	//przywracanie starych ustawien
	aDC.SelectObject(pOldPen);
	aDC.SelectObject(pOldBrush);

}

void CTomaszewski::GenerujSymbol(CRect &aRect)
{
	switch (m_klawisz)
	{
		case 'g':
			klawisz_tmp=m_klawisz;
			m_base_x=m_base_x;
			m_base_y-=m_speed;
			if (m_base_y-38*m_size<=0)
			{
				m_klawisz='d';
				if (m_bZmien)
				{
					for(int i=0; i<3;i++)
						m_colors[i]=rand()%256;
				}
			}

			break;

		case 'd':
			klawisz_tmp=m_klawisz;
			m_base_x=m_base_x;
			m_base_y+=m_speed;
			if (m_base_y+38*m_size>=aRect.Height())
			{
				m_klawisz='g';
				if (m_bZmien)
				{
					for(int i=0; i<3;i++)
						m_colors[i]=rand()%256;
				}
			}
		    	break;

		case 'p':
			klawisz_tmp=m_klawisz;
			m_base_x+=m_speed;
			m_base_y=m_base_y;
			if (m_base_x+70*m_size>=aRect.Width())
			{
				m_klawisz='l';
				if (m_bZmien)
				{
					for(int i=0; i<3;i++)
						m_colors[i]=rand()%256;
				}
			}

				break;
		case 'l':
			klawisz_tmp=m_klawisz;
			m_base_x-=m_speed;
			m_base_y=m_base_y;
			if (m_base_x-70*m_size<=0)
			{
				m_klawisz='p';
				if (m_bZmien)
				{
					for(int i=0; i<3;i++)
						m_colors[i]=rand()%256;
				}
			}

				break;
		case 's':
			m_base_x=m_base_x;
			m_base_y=m_base_y;
			klawisz_tmp=m_klawisz;
				break;

		case '1':
			m_speed=1;
			m_klawisz=klawisz_tmp;
				break;

		case '2':
			m_speed=2;
			m_klawisz=klawisz_tmp;
				break;

		case '3':
			m_speed=3;
			m_klawisz=klawisz_tmp;
				break;

		case '4':
			m_speed=4;
			m_klawisz=klawisz_tmp;
				break;

		case '5':
			m_speed=5;
			m_klawisz=klawisz_tmp;
				break;


		default:
			m_klawisz=klawisz_tmp;
			break;

	}
}

void CTomaszewski::Zatrzymaj()
{
	m_klawisz = 's';
}

void CTomaszewski::UstawSize(double Size)
{
	m_size = (int)Size;
}

void CTomaszewski::UstawSpeed(double Speed)
{
	m_speed = (int)Speed;
}

double* CTomaszewski::DajSize()
{
	double* pSize = new double;
	pSize[0] = m_size;
	return pSize;
}

double* CTomaszewski::DajSpeed()
{
	double* pSpeed = new double[1];
	pSpeed[0] = m_speed;
	return pSpeed;
}

void CTomaszewski::UstawColor(int C1, int C2, int C3)
{
		m_colors[0] = C1;
		m_colors[1] = C2;
		m_colors[2] = C3;
}

int* CTomaszewski::DajColor()
{
	int* pTabColor = new int[3];
	pTabColor[0] = m_colors[0];
	pTabColor[1] = m_colors[1];
	pTabColor[2] = m_colors[2];
	return pTabColor;
}

void CTomaszewski::UstawPolozenie(int X, int Y)
{
	if(m_klawisz == 's')
	{
		m_base_x = X+70*m_size;
		m_base_y = Y+38*m_size;
	}
}

int* CTomaszewski::DajPolozenieX()
{
		int* pX = new int[1];
		pX[0] = m_base_x-70*m_size;
		return pX;
}

int* CTomaszewski::DajPolozenieY()
{
	int* pY = new int[1];
	pY[0] = m_base_y-38*m_size;
	return pY;
}

void CTomaszewski::Serialize(CArchive &ar)
{
	if(ar.IsStoring())
	{
		//TODO: add storing code here
		ar << m_size;
		ar << m_speed;
		ar << m_base_x;
		ar << m_base_y;
		for(int i=0; i<3; i++)
		{
			ar << m_colors[i];
		}
	}
	else
	{
		//TODO: add storing code here
		ar >> m_size;
		ar >> m_speed;
		ar >> m_base_x;
		ar >> m_base_y;
		for(int i=0; i<3; i++)
		{
			ar >> m_colors[i];
		}
	}
}
