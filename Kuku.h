#pragma once
#include "Gracz.h"
#include "Krupier.h"
#include "Talia.h"
#include <Windows.h>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <sstream>
#include <conio.h>
class CKuku
{
public:
	CKuku();
	~CKuku();
    void RozdajKarty(void);
	void Gra(void);

	CKarta* pomocnicza;

private:
	CTalia* talia;
	CKrupier *krupier;
	CGracz *gracz;

	

};

