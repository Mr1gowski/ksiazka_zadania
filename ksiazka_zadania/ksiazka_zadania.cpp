#include <iostream>
// zamienia wiek na miesiace

void fun1(int w)
{
	w *= 12;
	std::cout << w;
}

int main()
{
	printf("ile masz lat?: ");
	int wiek;
	std::cin >> wiek;
	fun1(wiek);
	return 0;
}