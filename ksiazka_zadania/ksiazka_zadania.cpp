#include <iostream>
// liczy BMI



double wzrost(double f, double c)
{
	f *= 12;
	c += f;
	c *= 0.0254;
	return c;
}
double waga(double f)
{
	f /= 2.2;
	return f;
}


double BMI(double x, double d)
{
	double BMI;
	BMI = x / (d*d);
	return BMI;
}
int main()
{
	double ft,cal;
	printf("ile masz wzrostu w stopach i calach?: ");
	printf("ile stop?: ");
	std::cin >> ft;
	printf("ile cali?: ");
	std::cin >> cal;

	cal=wzrost(ft, cal);
	double kg;
	printf("podaj wage w funtach: ");
	std::cin >> kg;
	kg=waga(kg);

	std::cout << "twoje BMI jest rowne " << BMI(kg, cal);

	

	





	std::cin.get();
	return 0;
}