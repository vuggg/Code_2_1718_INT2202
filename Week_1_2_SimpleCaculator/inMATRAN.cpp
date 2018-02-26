#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	for(int i=1;i<=n;i++)
	{
		int count =0;
		for(int j = i;count<n;j++)
		{
			if(j>n)
			{
				j = 1;
			}
			cout << j <<" ";
			count++;
		}
		cout << "\n";
	}
}
