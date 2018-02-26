#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>

using namespace std;

int main()
{
	string a,b,c;
	
	cin >> a >> b >> c;
	if( (a.length()>100 || a.length()<=0 ) || (b.length()>100 || b.length()<=0 ) || (c.length()>100 || c.length()<=0 ))
	{
		cout << "khong hop le" << endl;
	}
	else
	{
		if(stoi(a)==0)
		{
			cout << abs(stoi(b) - stoi(c))  << endl;
		}
	}
	
}
