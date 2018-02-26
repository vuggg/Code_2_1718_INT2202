#include <iostream>
# include <new>

using namespace std;

int main()
{
	int n,k, count=0;
	cin >> n >> k;
	
	int *listOfNumber = new int[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> listOfNumber[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j>i)
			{
				if((listOfNumber[i]+listOfNumber[j])%k==0)
				{
					count++;
				}
			}
		}
	}
	
	cout << count;
	delete[] listOfNumber;
	
}
