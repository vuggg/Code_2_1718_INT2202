#include <iostream>
#include <iomanip>

using namespace std;
double c(double a);
double k(double a);

int main()
{
	double max,min,step;
	cin >> min >> max >> step;
	
	if(min>max)
	{
		cout << "";
	}
	else
	{
		do
	{
		cout << fixed << setprecision(2) << min << " "<< c(min)<< " " << k(min);
		cout << "\n";
		min = min + step ;
	}while(min<=max);
	}	
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
