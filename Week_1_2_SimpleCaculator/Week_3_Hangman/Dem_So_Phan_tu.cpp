#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin >> array[i];
	}
	int result[10] = {0};
	for(int i=0;i<10;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(array[j]==i)
			{
				result[i]++;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		cout << i << " : " << result[i] <<endl;
	}
}

