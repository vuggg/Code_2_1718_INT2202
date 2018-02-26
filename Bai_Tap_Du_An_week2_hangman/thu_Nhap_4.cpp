#include <iostream>

using namespace std;

double afterAmonth(double principal, double rate)
{
    return principal*rate;
}
int getMonthInDebt(double principal, double rate, double monthlyPayment)
{
    int i=0;
    for(;principal>0;i++)
    {
        principal =  principal+ afterAmonth(principal,rate) - monthlyPayment;
        if(i>40)
        {
        	return -1;
		}
    }
    return i;
}

int main()
{
	double principal = 1000000 ;
	double rate = 0.02;
	double monthlyPayment = 500000;
	cout << getMonthInDebt(principal,rate,monthlyPayment);
}
