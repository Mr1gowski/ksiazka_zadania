#include <iostream>
// wypisuje 2 zmienne jako godzine

void fun1(int a, int b)
{
	std::cout << a << ":" << b;
}

int main()
{
	int h, m;
	printf("ile godzin?: ");
	std::cin >> h;
	printf("ile minut?: ");
	std::cin >> m;
	fun1(h, m);
	
	return 0;
}