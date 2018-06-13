#include <iostream>
#include <string>

using namespace std;

void removeSpace(string &s)
{
    int idx = 0;
    for(int i=0;i<s.size();i++)
    {
        idx = i;
        while(s.at(idx)== ' ') idx++;
        for(int j=i;j<idx-1;j++)
        {
            s.erase(i,1);
        }
    }
    if(s.at(0)==' ') s.erase(0,1);
    if(s.at( s.size()-1 ) == ' ') s.erase(s.size(),1);
    return;
}
int countSpace(string&s)
{
    int count = 0;
    for(int i=0;i<s.size();i++)
    {
        if(s.at(i)==' ') count++;
    }
    return count+1;
}
int main()
{
    string s = "    hello    world";
    removeSpace(s);
    cout << countSpace(s);
}
