#include <iostream>
#include <new>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	double *danhsach = new double[n];
	
	for(int i = 0;i<n;i++)
	{
		cin >> danhsach[i];
	}
	
	double tong = 0;
	for(int i=0;i<n;i++)
	{
		tong = tong + danhsach[i];
	}
	
	double trungbinh = tong / double(n);
	
	for(int i = 0;i<n;i++)
	{
		if(danhsach[i]>= trungbinh)
		{
			cout <<fixed << setprecision(2) <<danhsach[i] << " ";
		}
	}
	
	delete[] danhsach;
}
