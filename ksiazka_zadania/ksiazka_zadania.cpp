#include <iostream>
#include <iomanip>

int main()
{
	int suma = 0,suma2=0;
	int tab[10][10];
	
	for (int i=0;i<10;i++)
	{
		for (int j = 0; j <10; j++)
		{
			if (j == 0)	tab[i][j] = i;
			if (j == 1)	tab[i][j]= pow(i, 2);
			if (j>1)	tab[i][j] = 0;
		}
	}
	std::cout << "widok tablicy:\n";
	for (int  i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			std::cout <<std::setw(3)<< tab[i][j];
			if (j == 0)	suma += tab[i][j];
			if (j == 1)	suma2 += tab[i][j];
		}
		std::cout << std::endl;
		
	}
	
	std::cout <<"suma pierwszej kolumny: "<< suma<<std::endl<<"suma drugiej kolumny: "<<suma2;
	
	return 0;
}