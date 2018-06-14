#include <string>
#include <iostream>

using namespace std;

void convertTime(string &s)
{
    /// 14:20
    string hours = s.substr(0,2);
    string minutes = s.substr(3,2);
    int h = stoi(hours);
    int m = stoi(minutes);
    if(h>12)
    {
        cout << h - 12 <<" : " << m << " chieu" << endl;
    }
    else
    {
        cout << h <<" : " << m << " sang" << endl;
    }
}

int main()
{
    string time24h;
    getline(cin, time24h);
    convertTime(time24h);
}


