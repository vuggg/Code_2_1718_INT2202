#include <iostream>
#include <string>

using namespace std;

int findxoet(string &s, int* arr)
{
    int idx =0;
    for(int i=0;i<s.size();i++)
    {
        if(s.at(i)=='/') arr[idx] = i;
        idx++;
    }
}
void chuanhoa(string &s)
{
    int *arr = new int[2];
    findxoet(s,arr);
    string day = s.substr(0,arr[0] - 0);
    string month = s.substr(arr[0]+1,arr[1] - arr[0] -1);
    if(stoi(day,nullptr,10)<10) day.insert(0,'0');
    if(stoi(month,nullptr,10)<10) month.insert(arr[0]+1,'0');
    s.replace(0,arr[0],day);
    s.replace(arr[0]+1,arr[1],month);
}

int main()
{
    string s = "6/6/1999";
    chuanhoa(s);
    cout << s;
}
