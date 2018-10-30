#pragma once
#include "Karta.h"
#include"Talia.h"
#include <iostream>
using namespace std;
class CGracz
{
public:
	CGracz();
	~CGracz();
	CKarta* Pomocnicza;

	virtual void DodajTalie(CTalia* t);
	virtual void BierzKarte(void);
	virtual void DrukujKarty(void) const;
    virtual void WymienKarte(int);
    virtual CKarta* PrzekazKarte(int);
	virtual void OdbierzKarte(CKarta* );
	virtual void Wskaznik(int);
	virtual bool SprawdzCzyWrocila(CKarta*);
	virtual bool SprawdzenieWygranej(void) const;
	
	

private:
    CKarta* ptrKarty[4];
	CTalia* talia;
};

