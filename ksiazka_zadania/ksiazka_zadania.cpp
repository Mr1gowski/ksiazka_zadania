#include <iostream>
// zamienia c na f;

void fun1(int w)
{
	w = 1.8*w + 32;
	std::cout << w;
}

int main()
{
	printf("ile stopni: ");
	int stopnie;
	std::cin >> stopnie;
	fun1(stopnie);
	return 0;
}