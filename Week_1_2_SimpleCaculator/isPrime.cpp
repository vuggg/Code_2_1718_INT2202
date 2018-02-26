#include <cmath>
#include <iostream>

using namespace std;
bool isPrime(int n);

int main()
{
    int n;
    cin >> n;
    if(n==1)
    {
    	cout << "no";
	}
    else
    {
    	if(isPrime(n))
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
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
