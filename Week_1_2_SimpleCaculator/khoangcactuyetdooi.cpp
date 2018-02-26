#include <iostream>
#include <new>

using namespace std;
int factorial(int n);
int expp(int n);

int main()
{
	int n;
	cin >> n;
	int *listOfNumber = new int[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> listOfNumber[i];
	}
	
	int phantu = factorial(n)/factorial(2)*factorial(n-2);
	
	int *distance = new int[phantu];
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			distance[i] = expp(listOfNumber[i]-listOfNumber[j]);
		}
	}
	int min = distance[0];
	
	for(int i=1;i<phantu;i++)
	{
		if(distance[i]<min)
		{
			min = distance[i];
		}
	}
	cout << min;
}

int factorial(int n)
{
	if(n==0 || n==1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}

int expp(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n<0)
	{
		return -n;
	}
	else
	{
		return n;
	}
}

