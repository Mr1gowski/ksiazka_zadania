#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::cin;
using std::ofstream;
using std::ifstream;

const int rozmiar = 10;

class plik
{
public:
	void wczytaj(int tab[rozmiar][rozmiar], int rozmiar);
	void zapisz_do_pliku(int tab[rozmiar][rozmiar], int rozmiar);
	void wypisz_z_pliku(int tab[rozmiar][rozmiar], int rozmiar);
};

void plik::wczytaj(int tab[rozmiar][rozmiar], int rozmiar)
{
	for (int i = 0; i < rozmiar; i++)
	{
		for (int j = 0; j < rozmiar; j++)
		{
			if (i==j)
				tab[i][j] = 1;
			else
				tab[i][j] = 0;
			
		
		}

	}
}

void plik::zapisz_do_pliku(int tab[rozmiar][rozmiar], int rozmiar)
{
	ofstream plik1("test1.txt");
	for (int i = 0; i < rozmiar; i++)
	{
		for (int j = 0; j < rozmiar; j++)
		{
			plik1 << tab[i][j];
		}
	}
	
	plik1.close();
}

void plik::wypisz_z_pliku(int tab[rozmiar][rozmiar], int rozmiar)
{
	ifstream plik2("test1.txt");
	cout << "z pliku: " << endl;
	for (int i = 0; i < rozmiar; i++)
	{
		for (int j = 0; j < rozmiar; j++)
		{
			plik2 >> tab[i][j];
			//cout << tab[0][0];
			cout << tab[i][j];
		}
		cout << endl;
	}
	plik2.close();
}


int main()
{
	plik d;
	int taba[rozmiar][rozmiar];
	d.wczytaj(taba, rozmiar);
	d.zapisz_do_pliku(taba, rozmiar);
	d.wypisz_z_pliku(taba, rozmiar);
	return 0;
}