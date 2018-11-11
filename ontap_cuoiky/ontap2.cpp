#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    string re;
    getline(cin,s);
    int n = s.length();
    re[0] = s[0];
    int idx = 1;
    for(int i=0;i<n;)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if(s[i]==s[j]) continue;
            else
            {
                re[idx] = s[j];
                idx++;
                i = j;
                break;
            }
        }

    }
    cout << re;
}
