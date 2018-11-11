#include <iostream>
#include <string>

using namespace std;

void swapString(string &s)
{
    // abcdef
    if(s.size() < 2) return;
    int i = 0;
    int j = s.size() -1;
    while(i!=j && i< s.size()/2)
    {
        string temp = s.substr(i,1);
        s.at(i) = s.at(j);
        s.at(j) = temp.at(0);
        i++;
        j--;
    }
    return;
}

int main()
{
    string s = "abcdef";
    //getline(cin, s);
    swapString(s);
    cout << s;
}
