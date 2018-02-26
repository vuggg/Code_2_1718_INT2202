#include <iostream>

using namespace std;
int USCLN(int a, int b);
int BSCNN(int a, int b, int uscln);

int main()
{
	int a,b;
	cin >> a >> b;
	if(a!=0 || b!= 0)
	{
		cout << BSCNN(a,b,USCLN(a,b));
	}
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

int BSCNN(int a, int b, int uscln)
{
	if(a<0)
	{
		a = -a;
	}
	if(b<0)
	{
		b = -b;
	}
	if(a==0 || b==0)
	{
		return 0;
	}
	return a*b/uscln;
}
