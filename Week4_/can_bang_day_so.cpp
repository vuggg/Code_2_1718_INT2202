#include <iostream>
#include <new>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *ar = new int[n];
	for(int i=0;i<n;i++)
	{
		cin >> ar[i];
	}
	int result[n], idx=0;
	for(int i=0;i<n;i++)
	{
		int found = 0;
		for(int j=0;j<i;j++)
		{
			if(ar[i]==ar[j]) found++;
		}
		if(found==0)
		{
			int count = 0;
			for(int j=i+1;j<n;j++)
			{
				if(ar[i]==ar[j])
				{
					count++;
				}
			}
			result[idx] = count;
		    idx++;
		}
	}
	
	int max = result[0];
	for(int i=0;i<idx;i++)
	{
		if(max < result[i])
		{
			max = result[i];
		}
	}
	cout << n - max-1;
	delete[] ar;
	
}
