#include <iostream>

using namespace std;

int main()
{
	int a,b;
	
	cin >> a >> b;
	if(a<0)
	{
		a = -a;
	}
	else if(b<0)
	{
		b = -b;
	}
	
	while(a!=b)
	{
		if(a>b)
		{
			a = a-b;
		}
		else
		{
			b = b-a;
		}
	}
	cout << a ;
}
