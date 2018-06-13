#include <iostream>
#include <string>
#include <vector>

using namespace std;


void pubbleSort(vector<string> &a)
{
    for(int i=0;i<)
}

int main()
{
    string s1, s2;
    if(s1.size() != s2.size())
    {
        cout << "NO";
        return 0;
    }
    vector<string> vs1(100),vs2(100);
    for(int i=0;i<s1.size(); i++)
    {
        vs1.at(i) = s1.substr(i,1);
        vs2.at(i) = s2.substr(i,1);
    }

    // sort vector

    for(int i=0;i<s1.size;i++)
    {
        if(vs1.at(i)!= vs2.at(i))
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;

}
