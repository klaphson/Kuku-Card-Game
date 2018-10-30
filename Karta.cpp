#include "Karta.h"



CKarta::CKarta(char kol,char fig)
{
	Kolor = kol;
	Figura = fig;
	
}


CKarta::~CKarta()
{
}

void CKarta::UstawNazwe(char fig)
{
	Figura = fig;
}

void CKarta::UstawKolor(char kol)
{
	Kolor = kol;
}

char CKarta::DajFigure(void) const
{
	return Figura;
}

char CKarta::DajKolor(void) const
{
	return Kolor;
}

ostream & operator << (ostream & strumien, const CKarta & karta)
{
	strumien << " Figura: " << karta.DajFigure() << " Kolor: " << karta.DajKolor();
	return strumien;
}
