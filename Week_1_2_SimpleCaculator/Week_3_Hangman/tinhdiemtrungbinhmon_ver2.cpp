#include <iomanip>
#include <iostream>
#define MAX 1000

using namespace std;

int main()
{
	double number[MAX];
	double realNumber[MAX];
	
	int i=0,j=0;
	
	do
	{
		cin >> number[i];
		if(number[i]<=10 && number[i]>=0)
		{
			realNumber[j] = number[i];
			j++;
		}
		i++;
	}while(number[i-1]>=0);
	
	
	double sum = 0;
	for(int idx=0;idx<j;idx++)
	{
		sum = sum + realNumber[idx];
	}
	double result = sum/j;
	cout << fixed << setprecision(2)<< result;
}
