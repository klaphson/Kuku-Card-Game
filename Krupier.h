#pragma once
#include "Gracz.h"
class CKrupier :
	public CGracz
{
private:
	CKarta* ptrKart[4];
	CTalia* talia;
public:
	CKrupier();
	~CKrupier();
	CKarta* Pom;
	

	void DodajTalie(CTalia* t);
    void BierzKarte(void);
    void DrukujKarty(void);
    void WymienKarte(int);
    CKarta* PrzekazKarte(void);
    void OdbierzKarte(CKarta*);
    void Wskaznik(void);
	bool SprawdzCzyWrocila(CKarta*);
	bool SprawdzenieWygranej(void);


};

