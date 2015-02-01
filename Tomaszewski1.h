// Tomaszewski1.h: interface for the CTomaszewski class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TOMASZEWSKI1_H__6D770BAE_2D99_4177_A859_930832FE4AC0__INCLUDED_)
#define AFX_TOMASZEWSKI1_H__6D770BAE_2D99_4177_A859_930832FE4AC0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CTomaszewski : public CObject  
{

//
	DECLARE_SERIAL(CTomaszewski);
//

public:
	void Serialize(CArchive& ar);
	int* DajPolozenieY(void);
	int* DajPolozenieX(void);
	void UstawPolozenie(int X, int Y);
	int* DajColor(void);
	void UstawColor(int C1, int C2, int C3);
	double* DajSpeed(void);
	double* DajSize(void);
	void UstawSpeed(double Speed);
	void UstawSize(double Size);
	void Zatrzymaj(void);
	char m_klawisz;
	void GenerujSymbol(CRect &aRect);
	void RysujSymbol(CDC& aDC, CRect& aRect);
	char klawisz_tmp;
	BOOL m_bZmien;
	int m_size;
	CTomaszewski();
	virtual ~CTomaszewski();

private:
	
	int m_colors[3];
	CPen m_pioro;
	CBrush m_pedzel;
	int m_base_x;
	int m_base_y;
	int m_speed;
};

#endif // !defined(AFX_TOMASZEWSKI1_H__6D770BAE_2D99_4177_A859_930832FE4AC0__INCLUDED_)
