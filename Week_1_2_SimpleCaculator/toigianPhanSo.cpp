#include <iostream>
#include <cmath>

using namespace std;
int UCLN(int a, int b);

int main()
{
	int a, b;
	cin >> a >> b;
	int ucln = UCLN(a,b);
	//cout << ucln;
	
	int tuso =  a/ucln;
	int mauso = b/ucln;
	
	//cout << tuso << " " <<  mauso ;
	
	
	if(mauso==1 && tuso > 1)
	{
		cout << tuso;
	}
	else if(tuso==0)
	{
		cout << 0;
	}
	else if(mauso == -1 && tuso>1 )
	{
		cout << -tuso;
	}
	else if(tuso<0 && mauso <0)
	{
		cout << abs(tuso) << "/" << abs(mauso);
	}
	else if(tuso > 0 && mauso <0)
	{
		cout << -abs(tuso) << "/" << abs(mauso);
	}
	else
	{
		cout << tuso << "/" << mauso;
	}
	
	
}

int UCLN(int a, int b)
        {            
            a=abs(a); 
            b=abs(b);            
            if (a==0 ||b==0)
                return a+b;
            while (a!=b)
            {
                if(a>b)
                    a=a-b;
                else
                    b=b-a;
            }
            return a;
        }
