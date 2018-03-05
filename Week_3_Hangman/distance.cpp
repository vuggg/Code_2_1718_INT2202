#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}

	
	sort(a, a+n);
	
	int xmin = abs(a[0]-a[1]);
	//int j;
	for(int i=1;i<n-1;i++)
	{
		int distance = abs(a[i]-a[i+1]);
		if(xmin>distance)
		{
			xmin = distance;
		}
	}
	
	cout << xmin;
	
}
