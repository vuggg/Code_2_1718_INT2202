#include <iostream>
#include <new>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *bird = new int[n];
	int *count = new int[n];
	
	for(int i=0;i<n;i++)
	{
		count[i] = 1;
	}
	
	for(int i=0;i<n;i++)
	{
		cin >> bird[i];
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(bird[i]==bird[j])
			{
				count[i]++;
			}
		}
	}
	int max = count[0];
	
	for(int i=0;i<n;i++)
	{
		if(count[i]>max)
		{
			max = count[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(count[i]==max)
		{
			cout << bird[i];
		}
	}
	
}
