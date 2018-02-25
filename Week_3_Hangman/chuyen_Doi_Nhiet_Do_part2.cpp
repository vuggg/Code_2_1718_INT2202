#include <iostream>
#include <iomanip>

using namespace std;
double c(double a);
double k(double a);

int main()
{
	double a;
	cin >> a;
	
	cout  << a << " " << fixed<< setprecision(2)<< c(a) <<" " << k(a);
}

double c(double a)
{
	double result = ((a-32)*5)/(9);
	return result;
	
}
double k(double a)
{
	return c(a)+273.15;
}
