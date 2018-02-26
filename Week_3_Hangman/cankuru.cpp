#include <iostream>

using namespace std;

int abss(int a)
{
	if(a==0) return 0;
	else if(a<0) return -a;
	return a;
}

int main()
{
	double x1,v1,x2,v2;
	cin >> x1 >> v1 >> x2 >> v2;
	
	double result = (x1-x2)/(v2-v1);
	
	if(result>=0)
	{
	    int t = abss(x1-x2);
	    int m = abss(v1-v2);
		if(t%m==0)
		{
		    cout << "YES";
		}
		else
		{
		    cout <<"NO";
		}
	}
	else
	{
		cout << "NO";
	}
	
}
