#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
	int n;
	cin >> n;
	int ar1[n];
	int ar2[n+1];
	for(int i=0;i<n;i++)
	{
		cin >> ar1[i];
	}
	for(int i=0;i<=n;i++)
	{
		cin >> ar2[i];
	}
	sort(ar1,ar1+n);
	sort(ar2,ar2+n+1);
	for(int i=0;i<n;i++)
	{
		if(ar1[i]!=ar2[i])
		{
			cout << ar2[i];
			exit(0);
		}
	}
	cout << ar2[n];
}
