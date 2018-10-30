#include "Talia.h"
#include "Kuku.h"

#include <iostream>
#include <conio.h>


using namespace std;

int main(void)
{

	int a;
	string dane;
	fstream plik;
	plik.open("krupier_wyniki.txt", ios::out);
	plik << 0;
	plik.close();
	plik.open("gracz_wyniki.txt", ios::out);
	plik << 0;
	plik.close();
	CKuku Kuku;
	CTalia talia;
	while (true)
	{
		cout << " 1. Graj \n 2. Historia gier \n 3. Wyswietl karty w talii \n 4. Zamknij program\n";
		cin >> a;
		system("cls");
		switch (a)
		{
		case 1:
			Kuku.Gra();
			break;
		case 2:
			plik.open("gracz_wyniki.txt", ios::in);
			if (plik.good() == true)
			{
				getline(plik, dane);
			}
			cout << " Liczba wygranych gracza: " << dane << endl;
			plik.close();
			plik.open("krupier_wyniki.txt", ios::in);
			if (plik.good() == true)
			{
				getline(plik, dane);
			}
			cout << " Liczba wygranych krupiera: " << dane << endl;
			plik.close();
			getchar();
			break;
		case 3:
			cout << talia << endl;
			getchar();
			break;
		case 4:
			exit(0);
		default:
			cout << " Nie ma takiej opcji !!! ";
			break;
		}
		getchar();
		system("cls");
	}
	return 0;
}