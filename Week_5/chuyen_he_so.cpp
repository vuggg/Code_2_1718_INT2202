#include<iostream>
#include <string>
#include <cmath>

using namespace std;
string nagativeNumber(string &s)
{
    int Length = s.length();
    for(int i = Length -1; i>=0 ;i-- )
    {
        if(s.at(i)=='1')
        {
            for(int j=i-1;j>=0;j--)
            {
                // 1000100
                if(s.at(j)=='0') s.replace(j,1,"1");
                else s.replace(j,1,"0");
            }
            break;
        }
    }
    return s;
}
string convert(long &n)
{
    string s;
    bool isNagative =  false;
    if(n<0) isNagative =  true;
    n = abs(n);
    int c;
    do{
        c = n%2;
        s.insert(0,1,c+'0');
        n/=2;
    }while(n>0);
    //if(isNagative) return nagativeNumber(s);
    return s;
}

int main()
{
    long n;
    cin >> n;
    cout << convert(n);
}
