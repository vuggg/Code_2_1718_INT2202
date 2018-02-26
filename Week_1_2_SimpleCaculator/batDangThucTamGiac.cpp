#include <cmath>
#include <iostream>
#include <cmath>

using namespace std;
bool isNoTriangle(int a, int b, int c);
void kindTriangle(int a, int b, int c);
bool isSquere(int a, int b, int c);

int main()
{
	int a,b,c;
	cin >> a >> b >> c;
	if(isNoTriangle(a,b,c))
	{
		cout << "Invalid";
	}
	else
	{
		cout << a + b +c << "\n" ;
		kindTriangle(a,b,c);
	}
	
}

bool isNoTriangle(int a, int b, int c)
{
	if(a+b > c && a+c> b & b+c > a)
	{
		return false;	
	}
	else
	{
		return true;
	}
}

void kindTriangle(int a, int b, int c)
{
	if(a==b && b==c)
	{
		cout << "deu";
	}
	else if( (a==b && a!= c) || (a==c && a != b) || (b==c && b!= a))
	{
		cout << "can";
	}
	else if( isSquere(a,b,c))
	{
		cout << "vuong";
	}
	else
	{
		cout << "thuong";
	}
}

bool isSquere(int a, int b, int c)
{
	if(pow(a,2)+pow(b,2)== pow(c,2))
	{
		return true;
	}
	else if(pow(a,2)+pow(c,2)== pow(b,2))
	{
		return true;
	}
	else if(pow(c,2)+pow(b,2)== pow(a,2))
	{
		return true;
	}
	else
	{
		return false;
	}
}
