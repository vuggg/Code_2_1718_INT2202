#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    int a,b,c,d;
    char dau1, dau2, dau3;
    cin >> a >> dau1 >> b >> dau2 >> c >> dau3 >> d ;
    if(a + b + c == d) cout << "+ \n+";
    else if(a+ b - c == d) cout << " +\n -";
}
