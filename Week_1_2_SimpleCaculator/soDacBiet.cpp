#include <iostream>
#include <cmath>


using namespace std;
bool isPrime(int n);
void printPrime(int n);
bool isPerfectNumber(int n);
void printPerfectNumber(int n);
void soChinhPhuong(int n);


int main()
{
	int n;
	cin >> n;
	printPrime(n);
	cout << "\n";
	printPerfectNumber(n);
	cout << "\n";
	soChinhPhuong(n);
	
	
}

void printPrime(int n)
{
	int count = 0;
	for(int i=2;i<=n;i++)
	{
		if(isPrime(i))
		{
			cout << i << " ";
			count++;
		}
	}
	if(count==0)
	{
		cout << " ";
	}
}

bool isPrime(int n)
{
	bool isPrime = true;
	for(int i = 2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	if(isPrime)
	{
		return true;
	}
}

bool isPerfectNumber(int n)
{
	int sum = 0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum = sum + i;
		}
	}
	if(sum == n)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void printPerfectNumber(int n)
{
	int count = 0;
	for(int i=2;i<=n;i++)
	{
		if(isPerfectNumber(i))
		{
			cout << i << " ";
			count = 1;
		}
	}
	if(count ==0)
	{
		cout << " ";
	}
}

void soChinhPhuong(int n)
{
	int count = 0;
	for(int i = 2 ; i<= n ;i++)
	{
		for(int j =2;j<= i/2;j++)
		{
			if(sqrt(i)==j)
			{
				cout << i << " ";
				count  = 1;
			}
		}
	}
	if(count == 0)
	{
		cout << " ";
	}
}
