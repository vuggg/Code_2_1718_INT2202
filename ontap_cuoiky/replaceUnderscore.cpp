#include <iostream>
#include <string>

using namespace std;

void del(string &s)
{
    int n = s.length();
    int idx = 0;
    for(int i=0;i<n;i++)
    {
        idx = i;
        while(s[idx] == '_' && s[idx+1]=='_') idx++;
        for(int j= i;j<idx;j++)
        {
            s.erase(i,1);
            n--;
        }
    }
}

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    del(s1);
    del(s2);
    cout << s1 << endl;
    cout << s2 << endl;
}
