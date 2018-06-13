#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    int n;
    string charC;
    getline(cin,s1);
    cin >> n;
    cin >> charC;
    s1.insert(n,charC);
    cout << s1;
}
