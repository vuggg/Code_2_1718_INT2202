#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    if(s1.size() != s2.size())
    {
        cout << "NO";
        return 0;
    }
    /// asdds
    /// sddsa
    int count = 0;
    for(int i=0;i<s1.size();i++)
    {
        for(int j=0;j<s2.size();j++)
        {
            if(s1.at(i)==s2.at(j))
            {
                s2.erase(j,1);
                count = count +1;
                //cout << count << endl;
                break;
            }
        }

    }
    if(count==s1.size())
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}
