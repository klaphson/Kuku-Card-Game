#pragma once
#include "Karta.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class CTalia
{
public:
	CTalia();
	~CTalia();
	void Tasuj(void);
	void DrukujTalie(void);
	CKarta *DajKarte(void);
	int pomocnicza;
	friend ostream & operator<<(ostream &, const CTalia &);


private:
	CKarta *ptrTabKart[52];
};

