#pragma once
#include <iostream>
using namespace std;
class CKarta
{
public:
	CKarta(char Kolor='W', char Figura='2');
	~CKarta();

	void UstawKolor(char Kolor);
	void UstawNazwe(char Figura);
	char DajKolor(void) const;
	char DajFigure(void) const;
	friend ostream & operator << (ostream &, const CKarta &);
	


private: 
    char Kolor;
	char Figura;

};

