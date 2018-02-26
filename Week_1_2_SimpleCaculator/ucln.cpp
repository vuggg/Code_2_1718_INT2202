#include <iostream>

using namespace std;
int USCLN(int a, int b);

int main()
{
	int a,b;
	cin >> a >> b;
	
	cout << USCLN(a,b);
}
int USCLN(int a, int b)
{
	if(a==0 && b!= 0)
	{
		if(b>0)
		{
			return b;
		}
		else
		{
			return -b;
		}
	}
	else if(a!=0 && b==0)
	{
		if(b>0)
		{
			return a;
		}
		else
		{
			return -a;
		}
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
	return a;
}
