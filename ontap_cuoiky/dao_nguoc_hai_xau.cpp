#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int j = 0;
    for(int i=s.size()-1; (i!=j);i--)
    {
        if(i==j) break;
        string cuoi = s.substr(i,1);
        string dau = s.substr(j,1);
        s.replace(i,1,dau);
        s.replace(j,1,cuoi);
        j++;
    }
    cout << s;
}
