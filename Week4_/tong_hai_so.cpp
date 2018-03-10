#include <iostream>
#include <new>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *a = new int[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	sort(a, a+n);
	
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(a[i]+a[j]==0)
			{
				cout << a[i] <<" " << a[j] <<"\n";
			}
		}
	}
	
	
	delete[] a;
}
