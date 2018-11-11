#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool check(string &s)
{
    int idx = 0;
    for(int i=s.size()-1;i>=0 && i!=idx;i--)
    {
        if(s.at(i) != s.at(idx)) return false;
        idx++;
    }
    return true;
}


int main()
{
    string s;
    int q;
    getline(cin,s);
    cin >> q;
    vector<int> l(q);
    for(int i=0;i<q;i++)
    {
        int temp;
        cin >> temp;
        l.at(i) = temp;
    }
    for(int i=0;i<q;i++)
    {
        int found = 0;
        for(int j=0;j<=s.size() - l.at(i);j++)
        {
            string subtring = s.substr(j,l.at(i));
            if(check(subtring)) found = 1;
        }
        cout << found << endl;
    }
}
