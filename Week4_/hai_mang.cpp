#include <iostream>


using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;
	int arr1[n], arr2[m];
	int result1[n], result2[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> arr1[i];
	}
	for(int i=0;i<m;i++)
	{
		cin >> arr2[i];
	}
	int idx =0, idx2=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(arr2[j]%arr1[i]!=0)
			{
				break;
			}
		}
		result1[idx] = arr1[i]; idx++;
	}
	for(int i=0;i<idx;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(result1[i]%arr1[j]!=0)
			{
				break;
			}
		}
		result2[idx2] = result1[i]; idx2++;
	}
	for(int i=0;i<idx2;i++)
	{
		cout << result2[i] << " ";
	}
}
