#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n,m; 
	cin >> n >> m;
	int arr1[n];
	int arr2[m];
	for(int i=0;i<n;i++)
	{
		cin >> arr1[i];
	}
	for(int i=0;i<m;i++)
	{
		cin >> arr2[i];
	}
	sort(arr1,arr1+n);
	sort(arr2,arr2+m);
	
	int dk[ arr2[0] ];
	
	int idx = 0;
	bool checkdk2 = true;
	for(int j=1;j<1+arr2[0];j++)
	{
		for(int i=0;i<m;i++)
		{
			if(arr2[i]%j!=0)
			{
				checkdk2 = false;
				break;
			}
		}
		if(checkdk2)
		{
			dk[idx] = j;
			idx++;
		}
		checkdk2 = true;
	}
	
	
	bool checkdk1 = true;
	int count = 0;
	for(int i=0;i<idx;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(dk[i]%arr1[j]!=0)
			{
				checkdk1 = false;
				break;
			}
		}
		if(checkdk1)
		{
			count++;
		}
		checkdk1 = true;
	}
	cout << count;
}


