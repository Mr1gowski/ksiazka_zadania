#include <iostream>
// wywoluje funkcje wypisujace tekst

void fun1()
{
	std::cout << "entliczek pentliczek\n";
}
void fun2()
{
	std::cout << "czerwony stoliczek\n";
}
int main()
{
	fun1();
	fun1();
	fun2();
	fun2();
	return 0;
}