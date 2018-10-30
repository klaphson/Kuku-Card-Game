#include "Gracz.h"



CGracz::CGracz()
{
	for (int i = 0; i < 4; i++)
	{
		ptrKarty[i] = new CKarta;
		ptrKarty[i] = NULL;
	}
}


CGracz::~CGracz()
{
}

void CGracz::DodajTalie(CTalia* t)
{
	talia = t;
}

void CGracz::BierzKarte(void)
{
	int i = 0;
	while (ptrKarty[i] != NULL)
	{
		i++;
	}
	ptrKarty[i] = talia->DajKarte();
	
}


void CGracz::DrukujKarty(void) const
{
	int b = 1;
	cout << " Twoje karty: " << endl;
	for (int i=0; i < 4; i++)
	{
		if (ptrKarty[i] != NULL)
		{
			//cout << i << " Figura: " << ptrKarty[i]->DajFigure() << " Kolor: " << ptrKarty[i]->DajKolor() << endl;
			cout << b << *ptrKarty[i] << endl;
	    }
		b++;
	}
}

void CGracz::WymienKarte(int i)
{
	delete ptrKarty[i];
	ptrKarty[i] = NULL;
	ptrKarty[i] = talia->DajKarte();
}

CKarta* CGracz::PrzekazKarte(int i)
{
	Pomocnicza = ptrKarty[i];
	return ptrKarty[i];
}

void CGracz::OdbierzKarte(CKarta *KartaOdebrana)
{
	int i = 0;
	while (ptrKarty[i] != NULL)
	{
		i++;
	}
	ptrKarty[i] = KartaOdebrana;
	if (Pomocnicza != NULL)
	{
		if (SprawdzCzyWrocila(KartaOdebrana))
			WymienKarte(i);
	}
}

void CGracz::Wskaznik(int i)
{
	ptrKarty[i] = NULL;
}

bool CGracz::SprawdzCzyWrocila(CKarta *KartaOdebrana)
{
	if (Pomocnicza->DajFigure() == KartaOdebrana->DajFigure() && Pomocnicza->DajKolor() == KartaOdebrana->DajKolor())
		return true;
	else return false;
}

bool CGracz::SprawdzenieWygranej(void) const
{
	if (ptrKarty[0] == NULL)
	{
		if ((ptrKarty[1]->DajFigure() == ptrKarty[2]->DajFigure() && ptrKarty[1]->DajFigure() == ptrKarty[3]->DajFigure()) || (ptrKarty[1]->DajKolor() == ptrKarty[2]->DajKolor() && ptrKarty[1]->DajKolor() == ptrKarty[3]->DajKolor()))
			return true;
		else return false;
	}

	 else if (ptrKarty[1] == NULL)
	{
		if ((ptrKarty[0]->DajFigure() == ptrKarty[2]->DajFigure() && ptrKarty[0]->DajFigure() == ptrKarty[3]->DajFigure()) || (ptrKarty[0]->DajKolor() == ptrKarty[2]->DajKolor() && ptrKarty[0]->DajKolor() == ptrKarty[3]->DajKolor()))
			return true;
		else return false;
	}

	else if (ptrKarty[2] == NULL)
	{
		if ((ptrKarty[1]->DajFigure() == ptrKarty[3]->DajFigure() && ptrKarty[0]->DajFigure() == ptrKarty[3]->DajFigure()) || (ptrKarty[1]->DajKolor() == ptrKarty[3]->DajKolor() && ptrKarty[0]->DajKolor() == ptrKarty[3]->DajKolor()))
			return true;
		else return false;
	}

	else if (ptrKarty[3] == NULL)
	{
		if ((ptrKarty[1]->DajFigure() == ptrKarty[2]->DajFigure() && ptrKarty[1]->DajFigure() == ptrKarty[0]->DajFigure()) || (ptrKarty[1]->DajKolor() == ptrKarty[2]->DajKolor() && ptrKarty[1]->DajKolor() == ptrKarty[0]->DajKolor()))
			return true;
		else return false;
	}
}
