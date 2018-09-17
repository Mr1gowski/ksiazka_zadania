#include <iostream>
#include<deque>
#include <string>
#include <iomanip>
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::deque;
using std::ios_base;
using std::fixed;
using std::setprecision;

float a, b, c, x1, x2, delta;
int lp;
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
	std::cin >> a >> b>>c;
}


void przetworz_dane()
{
	delta = b * b - (4 * a*c);
	if (delta < 0)	lp = 0;
	if (delta == 0)	lp = 1;
	if (delta > 0)	lp = 2;
	cout << "delta: " << delta;
	switch (lp)
	{
	case 1:
		x1 = -b / (2*a);
		break;
	case 2:
		x1 = (-b + sqrt(delta)) / 2 * a;
		x2 = (-b - sqrt(delta)) / 2 * a;
		break;
	default:
		break;
	}
}

void wyswietl_dane()
{
	if (delta > 0)
		cout << x1 << endl << x2;
	if (delta == 0)
		cout << x1;
	if (delta < 0)
		cout << "nie ma pierwiastkow";
}