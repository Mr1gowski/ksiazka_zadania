#include <iostream>
// zamienia lat swietlnych na jednostki astronomiczne;

void fun1(double w)
{
	w *= 63240;
	//std::cout.setf(std::ios::fixed);
	std::cout << w;
}

int main()
{
	printf("ile lat: ");
	int lata;
	std::cin >> lata;
	fun1(lata);
	return 0;
}