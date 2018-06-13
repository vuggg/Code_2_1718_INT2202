#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    getline(cin,s1);
    int x,y;
    cin >> x >> y;
    x = x; y = y;
    string sx = s1.substr(x,1);
    cout << sx << endl;
    string sy = s1.substr(y,1);
    cout << sy << endl;
    s1.replace(x,1,sy);
    s1.replace(y,1,sx);


    cout << s1;
}

