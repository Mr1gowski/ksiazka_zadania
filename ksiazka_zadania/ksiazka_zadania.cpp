#include <iostream>
// zamienia centymetry na stopy i cale 
const double cal = 30.48;


void fun1(double  a)
{
	a /= cal;
	int ft=0;
	for (int i = 0; a > 12; i++)
	{
		if (a>12)
		{
			a -= 12;
			ft += 1;
		}
	}
	if (ft > 0)

		std::cout << ft << ", " << a;
	else
		std::cout << a;
}

int main()
{
	double cm;
	printf("ile masz wzrostu w cm?: ");
	std::cin >> cm;
	fun1(cm);

	std::cin.get();
	return 0;
}