#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

using std::ios_base;
using std::endl;
using std::cout;
using std::cin;

int losuj, zgadnij;
int main()
{
srand(time(NULL));
losuj = (std::rand() % 9) + 0;


	
	
	cin >> zgadnij;
	if (zgadnij == losuj)

		cout << "brawo";
	else
		cout << "nie tym razem";
	return 0;
}