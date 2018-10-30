#include "Talia.h"



CTalia::CTalia()
{
	pomocnicza = 0;
	for (int i = 0; i<52; i++)
	{

		ptrTabKart[i] = new CKarta;
		if (i<4)
		{
			ptrTabKart[i]->UstawNazwe('2');
			if (i == 0) ptrTabKart[i]->UstawKolor('D');
			else if (i == 1) ptrTabKart[i]->UstawKolor('S');
			else if (i == 2) ptrTabKart[i]->UstawKolor('Z');
			else if (i == 3) ptrTabKart[i]->UstawKolor('W');
		}
		else if (3<i && i<8)
		{
			ptrTabKart[i]->UstawNazwe('3');
			if (i == 4) ptrTabKart[i]->UstawKolor('D');
			else if (i == 5) ptrTabKart[i]->UstawKolor('S');
			else if (i == 6) ptrTabKart[i]->UstawKolor('Z');
			else if (i == 7) ptrTabKart[i]->UstawKolor('W');	
		}
		else if (7<i && i<12)
		{
			ptrTabKart[i]->UstawNazwe('4');
			if (i == 8) ptrTabKart[i]->UstawKolor('D');
			else if (i == 9) ptrTabKart[i]->UstawKolor('S');
			else if (i == 10) ptrTabKart[i]->UstawKolor('Z');
			else if (i == 11) ptrTabKart[i]->UstawKolor('W');
			
		}
		else if (11<i && i<16)
		{
			ptrTabKart[i]->UstawNazwe('5');
			if (i == 12) ptrTabKart[i]->UstawKolor('D');
			else if (i == 13) ptrTabKart[i]->UstawKolor('S');
			else if (i == 14) ptrTabKart[i]->UstawKolor('Z');
			else if (i == 15) ptrTabKart[i]->UstawKolor('W');
		}
		else if (15<i && i<20)
		{
			ptrTabKart[i]->UstawNazwe('6');
			if (i == 16) ptrTabKart[i]->UstawKolor('D');
			else if (i == 17) ptrTabKart[i]->UstawKolor('S');
			else if (i == 18) ptrTabKart[i]->UstawKolor('Z');
			else if (i == 19) ptrTabKart[i]->UstawKolor('W');
		}
		else if (19<i && i<24)
		{
			ptrTabKart[i]->UstawNazwe('7');
			if (i == 20) ptrTabKart[i]->UstawKolor('D');
			else if (i == 21) ptrTabKart[i]->UstawKolor('S');
			else if (i == 22) ptrTabKart[i]->UstawKolor('Z');
			else if (i == 23) ptrTabKart[i]->UstawKolor('W');
		}
		else if (23<i && i<28)
		{
			ptrTabKart[i]->UstawNazwe('8');
			if (i == 24) ptrTabKart[i]->UstawKolor('D');
			else if (i == 25) ptrTabKart[i]->UstawKolor('S');
			else if (i == 26) ptrTabKart[i]->UstawKolor('Z');
			else if (i == 27) ptrTabKart[i]->UstawKolor('W');
		}
		else if (27<i && i<32)
		{
			ptrTabKart[i]->UstawNazwe('9');
			if (i == 28) ptrTabKart[i]->UstawKolor('D');
			else if (i == 29) ptrTabKart[i]->UstawKolor('S');
			else if (i == 30) ptrTabKart[i]->UstawKolor('Z');
			else if (i == 31) ptrTabKart[i]->UstawKolor('W');
			
		}
		else if (31<i && i<36)
		{
			ptrTabKart[i]->UstawNazwe('D');
			if (i == 32) ptrTabKart[i]->UstawKolor('D');
			else if (i == 33) ptrTabKart[i]->UstawKolor('S');
			else if (i == 34) ptrTabKart[i]->UstawKolor('Z');
			else if (i == 35) ptrTabKart[i]->UstawKolor('W');
		}
		else if (35<i && i<40)
		{
			ptrTabKart[i]->UstawNazwe('J');
			if (i == 36) ptrTabKart[i]->UstawKolor('D');
			else if (i == 37) ptrTabKart[i]->UstawKolor('S');
			else if (i == 38) ptrTabKart[i]->UstawKolor('Z');
			else if (i == 39) ptrTabKart[i]->UstawKolor('W');
		}
		else if (39<i && i<44)
		{
			ptrTabKart[i]->UstawNazwe('Q');
			if (i == 40) ptrTabKart[i]->UstawKolor('D');
			else if (i == 41) ptrTabKart[i]->UstawKolor('S');
			else if (i == 42) ptrTabKart[i]->UstawKolor('Z');
			else if (i == 43) ptrTabKart[i]->UstawKolor('W');
		}
		else if (43<i && i<48)
		{
			ptrTabKart[i]->UstawNazwe('K');
			if (i == 44) ptrTabKart[i]->UstawKolor('D');
			else if (i == 45) ptrTabKart[i]->UstawKolor('S');
			else if (i == 46) ptrTabKart[i]->UstawKolor('Z');
			else if (i == 47) ptrTabKart[i]->UstawKolor('W');
		}
		else if (47<i && i<52)
		{
			ptrTabKart[i]->UstawNazwe('A');
			if (i == 48) ptrTabKart[i]->UstawKolor('D');
			else if (i == 49) ptrTabKart[i]->UstawKolor('S');
			else if (i == 50) ptrTabKart[i]->UstawKolor('Z');
			else if (i == 51) ptrTabKart[i]->UstawKolor('W');
		}
	}
}


CTalia::~CTalia()
{
	for (int i = 0; i < 52; i++)
	{
		delete ptrTabKart[i];
		ptrTabKart[i] = NULL;
	}
}

void CTalia::Tasuj(void)
{
	srand(time(NULL));
	for (int i = 0; i < 52; i++)
	{
		int wylosowana_liczba1 = (rand() % 52);
		int wylosowana_liczba2 = (rand() % 52);
		CKarta *wsk_pom;
		wsk_pom = ptrTabKart[wylosowana_liczba1];
		ptrTabKart[wylosowana_liczba1] = ptrTabKart[wylosowana_liczba2];
		ptrTabKart[wylosowana_liczba2] = wsk_pom;
	}

}

void CTalia::DrukujTalie(void)
{
	char a, b;
	for (int i = 0; i< 52; i++)
	{
		a = ptrTabKart[i]->DajKolor();
		b = ptrTabKart[i]->DajFigure();
		cout << "Figura: " << b << " Kolor: " << a << endl;
	}
}

CKarta *CTalia::DajKarte(void)
{  
	pomocnicza++;
	return ptrTabKart[pomocnicza];
	
}

ostream & operator<<(ostream & strumien, const CTalia & talia)
{
	int c;
	char a, b;
	for (int i = 0; i< 52; i++)
	{
		c = i;
		a = talia.ptrTabKart[i]->DajKolor();
		b = talia.ptrTabKart[i]->DajFigure();
		strumien << c+1 <<". Figura: " << b << " Kolor: " << a << endl;
	}
	return strumien;
}

