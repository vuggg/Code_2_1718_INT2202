#include <iostream>

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
	
	for(int i=0;i<=n;i++)
	{
		int found = 0;
		for(int j=0;j<n;j++)
		{
			if(ar2[i]==ar1[j])
			{
				found = 1;
				break;
			}
		}
		if(found==0) cout << ar2[i] << endl;
	}
}
