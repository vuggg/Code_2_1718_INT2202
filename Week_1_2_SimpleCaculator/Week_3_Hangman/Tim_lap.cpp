#include <iostream>
#include <new>

using namespace std;

int main()
{
	int n;
	cin >>n;
	int *array = new int[n+1];
	int *result = new int[n+1];
	for(int i=0;i<n;i++)
	{
		result[i] =0;
	}
	for(int i=0;i<n;i++)
	{
		cin >> array[i];
	}
	int idx = 0;
	for(int i=0;i<n;i++)
	{
		bool seen = false;
		for(int j=0;j<idx;j++)
		{
			if(array[i]==result[j])
			{
				seen = true;
			}
		}
		if(seen==false)
		{
			result[idx] = array[i];
			idx++;
		}
		if(seen)
		{
			cout << "Yes";
			return 0;
		}
	}
	
	cout << "No";
	
	
	delete[] array;
	delete[] result;
	
}
