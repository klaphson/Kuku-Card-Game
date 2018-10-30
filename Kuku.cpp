#include "Kuku.h"



CKuku::CKuku()
{
	pomocnicza = new CKarta;
	pomocnicza = NULL;
	
	talia = new CTalia;
	krupier = new CKrupier;
	gracz = new CGracz;
	gracz->DodajTalie(talia);
	krupier->DodajTalie(talia);
	talia->Tasuj();
}


CKuku::~CKuku()
{
}



void CKuku::RozdajKarty(void)
{
	
	for (int i=0; i < 7; i++) 
	{
		if (i < 4) gracz->BierzKarte();
		else krupier->BierzKarte();
	}
}

void CKuku::Gra(void)
{
	string dane;
	int a,b=1,c;
	RozdajKarty();
	while (b)
	{
		gracz->DrukujKarty();
		cout << "Ktora karte chcesz przekazac (1, 2, 3, 4) ? " << endl;
		cin >> a;
		system("cls");
		krupier->OdbierzKarte(gracz->PrzekazKarte(a-1));
		gracz->Wskaznik(a-1);
		if (gracz->SprawdzenieWygranej())
		{
			cout << "KUKU!!!   Wygral Gracz !!!" << endl;
			gracz->DrukujKarty();
			fstream plik;
			plik.open("gracz_wyniki.txt", ios::in);
			if (plik.good() == true)
			{
				getline(plik, dane);
				c = atoi(dane.c_str());
				c++;
			}
			plik.close();
			ostringstream ss;
			ss << c;
			dane = ss.str();
			plik.open("gracz_wyniki.txt", ios::out | ios::trunc);
			if (plik.good() == true)
			{
				plik << dane;
			}
			plik.close();
			getchar();
			system("cls");
			break;
		}
		gracz->OdbierzKarte(krupier->PrzekazKarte());
		krupier->Wskaznik();
		if (krupier->SprawdzenieWygranej())
		{
			cout << "KUKU!!!   Wygral Krupier !!!" << endl;
			krupier->DrukujKarty();
			fstream plik;
			plik.open("krupier_wyniki.txt", ios::in);
			if (plik.good() == true)
			{
				getline(plik, dane);
				c = atoi(dane.c_str());
				c++;
			}
			plik.close();
			ostringstream ss;
			ss << c;
			dane = ss.str();
			plik.open("krupier_wyniki.txt", ios::out | ios::trunc);
			if (plik.good() == true)
			{
				plik << dane;
			}
			plik.close();
			getchar();
			system("cls");
			break;
		}
	}
}


