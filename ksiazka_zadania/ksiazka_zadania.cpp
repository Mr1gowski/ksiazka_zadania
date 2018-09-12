#include <iostream>
#include <math.h>
using std::ios_base;
using std::endl;
using std::cout;
using std::cin;

int main()
{
	float a, b, c, delta, x1, x2;
	char liczba_p;
	cin >> a;
	cout.setf(ios_base::fixed);
	cout.precision(2);
	if (a == 0)
		cout << "a nie moze byc ujemne";
	else
	{
		cin >> b;
		cin >> c;

	}
	delta = pow(b, 2) - 4 * a*c;

	if (delta > 0) liczba_p = 2;
	if (delta == 0) liczba_p = 1;
	if (delta < 0) liczba_p = 0;


	switch (liczba_p)
	{
	case 1:
		x1 = -b / 2 * a;
		cout << x1;
		break;
	case 2:
		x1 = -b - sqrt(delta) / 2 * a;
		x2 = -b + sqrt(delta) / 2 * a;
		cout << x2;
		break;
	case 0:
		cout << "nie ma zandych pierwiastkow, delta rowna 0";
	default:
		break;
	}
	

	return 0;
}