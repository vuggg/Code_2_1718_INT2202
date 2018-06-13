#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin,s2);
    /*
        string
        substringexample
    */
    for(int i= 0 ;i <= s2.size() - s1.size(); i++)
    {
        string tem = s2.substr(i,s1.size() );
        int t = s1.compare(tem);
        if(t==0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
