#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::ios_base;
using std::fixed;
using std::setprecision;
const int n = 6;
int liczby[n];
int x, i, j;
void czytaj_dane();
void przetworz_dane();
void wyswietl_dane();
int main()
{
	

	czytaj_dane();
	przetworz_dane();
	wyswietl_dane();
	return 0;
}

void czytaj_dane()
{
	for (int  i = 0; i < n; i++)
	{
		cin>> liczby[i];
	}
}

void przetworz_dane()
{
	for ( i = 1; i <= n-1; i++)
	{
		for (j=n-1; j >= i-1 ; j--)
		{
			if (liczby[j] >= liczby[j + 1])
			{
				x = liczby[j];
				liczby[j] = liczby[j + 1];
				liczby[j + 1] = x;
			}
		}
	}

}

void wyswietl_dane()
{
	for (i = 0; i  <n; i++)
		cout << liczby[i];
}