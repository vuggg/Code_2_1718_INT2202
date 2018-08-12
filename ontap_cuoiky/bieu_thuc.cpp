#include <string>
#include <iostream>
#include <vector>

using namespace std;

void tovecto(vector<int> &vt, const string& s)
{
    // 45+20-30+1
    for(int i=0;i<s.size();)
    {
        int j = i;
        while(j<s.size()-1)
        {
            if(s.at(j+1) <= '9' && s.at(j+1) >= '0') j++;
            else break;
        }
        int temp = stoi(s.substr(i, j-i+1 ));
        vt.push_back(temp);
        i = j+1;
    }
}
int main()
{
    string s;
    getline(cin, s);
    vector<int> vt;
    tovecto(vt,s);
    int sum = 0;
    for(int i=0;i<vt.size();i++)
    {
        sum = vt.at(i) + sum;
    }
    cout << sum;
}
