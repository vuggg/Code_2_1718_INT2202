#include <iostream>
#include <string>

using namespace std;

void convertTime(string &s)
{
    int x = stoi(s,nullptr,10);
    if(x > 12)
    {
        x = x - 12;
    }
    string hours = to_string(x);
    cout << endl;
    cout << hours << endl;

    s.replace(0,2,hours);
    cout << s;
}

int main()
{
    string s = "22:40";
    convertTime(s);
}
