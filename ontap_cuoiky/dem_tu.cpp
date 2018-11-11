#include <iostream>
#include <string>

using namespace std;


int chuanhoa(string &s)
{
    if(s.size()<1) return 0;
    int count = 0;
    while(s.at(0) == ' ') s.erase(0,1);
    for(int i=0;i<s.size();i++)
    {
        if( s.at(i) == ' ')
        {
            while(s.at(i+1) == ' ') s.erase(i+1,1);
            count++;
        }

    }
    return count+1;
}

int main()
{
    string s;
    getline(cin, s);
    //chuanhoa(s);
    cout << chuanhoa(s);
}
