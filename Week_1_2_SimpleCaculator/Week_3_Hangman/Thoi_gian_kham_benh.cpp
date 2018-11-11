#include <iostream>
#include <new>

using namespace std;
void sort(int *array, int n);

int main()
{
	int n;
	cin >> n;
	int sum = 0;
	
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin >> array[i];
	}
	sort(array,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i;j++)
		{
			sum = sum + array[j];
		}
	}
	cout << sum;
}

void sort(int *array, int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(array[j]<array[j-1])
			{
				int t;
				t = array[j-1];
				array[j-1] = array[j];
				array[j] = t;
			}
		}
	}
}
