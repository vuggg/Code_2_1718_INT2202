#include <iostream>
#include <string>

using namespace std;

void chuanhoa(string &s)
{
    for(int i=0;i<s.size();i++)
    {
        if('A' <= s.at(i) <= 'Z')
        {
            s.at(i) = tolower(s.at(i));
        }
    }
}

void res(string &s)
{
    if(s.size() < 1 ) return;
    for(int i=0;i<s.size()-1;i++)
    {
        for(int j=i+1;j<s.size();)
        {
            if(s.at(i) == s.at(j))
            {
                s.erase(j,1);
                continue;
            }
            break;
        }
    }
    return;
}

int main()
{
    // hhhhhhhhocccccc lLlLlLaap triinh vui laMmMm
    string s;
    getline(cin, s);

    chuanhoa(s);
    res(s);
    cout << s;

}
