#include <iostream>
#include <cmath>
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
		if(a[i]==a[i+1])
		{
			cout << "yes";
		}
	}
	cout << "no";
}
