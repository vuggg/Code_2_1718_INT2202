#include <iostream>

using namespace std;

int main()
{
	double x1,v1,x2,v2;
	cin >> x1 >> v1 >> x2 >> v2;
	
	double result = (x1-x2)/(v2-v1);
	
	if(result>=0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
	
}
