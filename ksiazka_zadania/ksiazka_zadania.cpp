#include <iostream>
// zamienia mile na metry
int main()
{
	using std::cin;
	using std::cout;
	printf("ile mil\n");
	int mile;
	cin>> mile;
	mile *= 1852;
	cout << mile;
	return 0;
}