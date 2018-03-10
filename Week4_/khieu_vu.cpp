#include <iostream>
#include <new>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int **arr = new int*[n];
	for(int i=0;i<n;i++)
	{
		arr[i] = new int[2];
	}
	for(int i=0;i<n;i++)
	{
		cin >> arr[i][0] >> arr[i][1];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i][0]<=arr[i][1])
		{
			cout << "No"; return 0;
		}
	}
	cout << "Yes";
}
