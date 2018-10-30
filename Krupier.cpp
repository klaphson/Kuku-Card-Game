#include "Krupier.h"



CKrupier::CKrupier()
{
	for (int i = 0; i < 4; i++)
	{
		ptrKart[i] = new CKarta;
		ptrKart[i] = NULL;
	}
	Pom = NULL;
}


CKrupier::~CKrupier()
{
}

void CKrupier::Wskaznik(void)
{
	ptrKart[2] = NULL;
}

void CKrupier::BierzKarte(void)
{
	int i = 0;
	while (ptrKart[i] != NULL)
	{
		i++;
	}
	ptrKart[i] = talia->DajKarte();

}

void CKrupier::DrukujKarty(void)
{
	cout << " Twoje karty: " << endl;
	for (int i = 0; i < 4; i++)
	{
		if (ptrKart[i] != NULL)
		{
			cout << i << " Figura: " << ptrKart[i]->DajFigure() << " Kolor: " << ptrKart[i]->DajKolor() << endl;
		}
	}
}

CKarta* CKrupier::PrzekazKarte(void)
{
	Pom = ptrKart[2];
	return ptrKart[2];
}

void CKrupier::OdbierzKarte(CKarta *KartaOdebrana)
{
	int i = 0;
	while (ptrKart[i] != NULL)
	{
		i++;
	}
	ptrKart[i] = KartaOdebrana;
	if (Pom != NULL)
	{
		if (SprawdzCzyWrocila(KartaOdebrana))
			WymienKarte(i);
	}
}

bool CKrupier::SprawdzCzyWrocila(CKarta *KartaOdebrana)
{
	if (Pom->DajFigure() == KartaOdebrana->DajFigure() && Pom->DajKolor() == KartaOdebrana->DajKolor())
		return true;
	else return false;
}

void CKrupier::WymienKarte(int i)
{
	delete ptrKart[i];
	ptrKart[i] = NULL;
	ptrKart[i] = talia->DajKarte();
}

bool CKrupier::SprawdzenieWygranej(void)
{
	if (ptrKart[0] == NULL)
	{
		if ((ptrKart[1]->DajFigure() == ptrKart[2]->DajFigure() && ptrKart[1]->DajFigure() == ptrKart[3]->DajFigure()) || (ptrKart[1]->DajKolor() == ptrKart[2]->DajKolor() && ptrKart[1]->DajKolor() == ptrKart[3]->DajKolor()))
			return true;
		else return false;
	}

	else if (ptrKart[1] == NULL)
	{
		if ((ptrKart[0]->DajFigure() == ptrKart[2]->DajFigure() && ptrKart[0]->DajFigure() == ptrKart[3]->DajFigure()) || (ptrKart[0]->DajKolor() == ptrKart[2]->DajKolor() && ptrKart[0]->DajKolor() == ptrKart[3]->DajKolor()))
			return true;
		else return false;
	}

	else if (ptrKart[2] == NULL)
	{
		if ((ptrKart[1]->DajFigure() == ptrKart[3]->DajFigure() && ptrKart[0]->DajFigure() == ptrKart[3]->DajFigure()) || (ptrKart[1]->DajKolor() == ptrKart[3]->DajKolor() && ptrKart[0]->DajKolor() == ptrKart[3]->DajKolor()))
			return true;
		else return false;
	}

	else if (ptrKart[3] == NULL)
	{
		if ((ptrKart[1]->DajFigure() == ptrKart[2]->DajFigure() && ptrKart[1]->DajFigure() == ptrKart[0]->DajFigure()) || (ptrKart[1]->DajKolor() == ptrKart[2]->DajKolor() && ptrKart[1]->DajKolor() == ptrKart[0]->DajKolor()))
			return true;
		else return false;
	}
}

void CKrupier::DodajTalie(CTalia* t)
{
	talia = t;
}

