#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
void nghiem_kep_thuc(double a, double b, double c, double delta);
void nghiem_phuc(double a, double b, double c, double delta);
double calculating_delta(double a, double b, double c);
void nghiem_don_thuc(double a, double b, double c);

int main()
{
	double a,b,c;
	cin >> a>>b >>c;
	double delta = calculating_delta(a,b,c);
	if(delta==0)
	{
		nghiem_don_thuc( a,  b,  c);
	}
	else if(delta >0)
	{
		nghiem_kep_thuc( a,  b,  c,  delta);
	}
	else
	{
		nghiem_phuc( a,  b,  c,  delta);
	}
}

double calculating_delta(double a, double b, double c)
{
	return pow(b,2)-4*a*c;
}

void nghiem_phuc(double a, double b, double c, double delta)
{
	double a1 = -b/2*a, a2 = sqrt(-delta)/2*a;
	cout << fixed << setprecision(2) << a1 << a2 << endl;
	cout << fixed << setprecision(2) << a1 << -a2 << endl;
}
void nghiem_don_thuc(double a, double b, double c)
{
	double x1 = -b/(2*a);
	cout << fixed << setprecision(2) << x1;
}
void nghiem_kep_thuc(double a, double b, double c, double delta)
{
	double x1 = (-b+sqrt(delta))/(2*a);
	double x2 = (-b-sqrt(delta))/(2*a);
	cout << fixed << setprecision(2) << x1 <<"\n" << x2 << endl;
}
