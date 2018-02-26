#include <iostream>
#include <cmath>

using namespace std;
bool soChinhPhuong(int n);

int main()
{
	int n;
	cin >> n;
	
	if(n==0)
	{
		cout << "YES";
	}
	else
	{
		if(soChinhPhuong(n))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	
	}
}


bool soChinhPhuong(int n)
{
	for(int j =2;j<= n/2;j++)
		{
			if(sqrt(n)==j)
			{
				return true;
			}
		}
	return false;
}
