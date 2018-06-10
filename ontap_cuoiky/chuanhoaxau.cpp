#include <iostream>
#include <string>
#include <stddef.h>

using namespace std;



void chuanhoa(string &s)
{
    int n = s.length();

    // del space at frist
    for(int i=0;i<n;i++)
    {
        if(s.at(0)==' ')
        {
            s.erase(0,1);
            n--;
        }
        else break;
    }

    // upper the frist

    if( 'a' <= s.at(0) <= 'z' ) s.at(0) = s.at(0) - 32;

    // del double

    for(int i=0;i<n;i++)
    {
        int idx = i;
        while(s.at(idx) == '.' && s.at(idx+1) == '.') idx++;
        for(int j=i;j<idx;j++)
        {
            s.erase(i,1);
            n--;
        }
    }
}

int main()
{
    string s = "...abbbc....sdlf.wre";
    string timestring = "18:40";
    chuanhoa(s);
    cout << s << endl;



}
