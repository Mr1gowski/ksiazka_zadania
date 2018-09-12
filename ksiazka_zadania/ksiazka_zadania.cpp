#include <iostream>
#include <math.h>
using std::ios_base;
using std::endl;
using std::cout;
using std::cin;

int main()
{
	float a, b, c, delta, x1, x2;
	cin >> a;
	if (a == 0)
	{
		cout << "zle";
	}
	else
	{
		cin >> b;
		cin >> c;
	}

	delta = pow(b, 2) - 4*a*c;
	if (delta < 0)
		cout << "nie ma pierwiastkow";
	else
	{
		if (delta == 0)
		{
			x1 = -b / (2 * a);
			cout << x1;
		}
		else
		{
			x1 = (-b - sqrt(delta)) / (2 * a);
			x2 = (-b + sqrt(delta)) / (2 * a);
			cout << x1 << endl;
			cout << x2 << endl;
		}

	}

	return 0;
}