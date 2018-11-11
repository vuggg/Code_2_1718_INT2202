#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n; cin >> n;
    s.erase(n,1);
    cout << s;
}
