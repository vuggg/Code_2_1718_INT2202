#include <string>
#include <iostream>

using namespace std;

void tach(string s, string &ho, string &tendem, string &ten)
{
    int postionSpace[10];
    int first = 0;
    int second=0;
    int last = 0;
    while(s.at(first)!=' ') first++;
    second = first+1;
    while(s.at(second)!=' ') second++;
    last = second +1;
    while(s.at(last)!=' ') last++;
    //cout << first << " "<< second <<" " <<last;
    ho = s.substr(0,first);
    cout << ho << endl;
    tendem = s.substr(first+1,last-first-1);
    cout << tendem << endl;
    ten = s.substr(last+1,s.size()-last-1);
    cout << ten << endl;
}

int main()
{
    string s = "nguyen thi minh anh";
    string ho;
    string tendem;
    string ten;
    tach(s,ho,tendem,ten);
}
