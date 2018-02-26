#include <iostream>
#include <new>

using namespace std;

int main()
{
	int n; 
	cin >> n;
	
	int *listOfBird = new int[n];
	int *count = new int[n];
	
	for(int i=0;i<n;i++)
	{
		count[i] = 1;
	}
	
	for(int i=0;i<n;i++)
	{
		cin >> listOfBird[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(listOfBird[i]==listOfBird[j])
			{
				count[i] = count[i]+1;
			}
		}
	}
	int max = count[0];
	for(int i=1;i<n;i++)
	{
		if(count[i]>max)
		{
			max = i;
		}
	}
	
	cout << listOfBird[max];
	
}



