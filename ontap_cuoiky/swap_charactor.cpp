#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1;
    getline(cin,s1);
    int x,y;
    cin >> x >> y;
    x = x-1; y = y-1;
    string sx = s1.substr(x,x+1);
    string sy = s1.substr(y,y+1);
    s1.replace(x,x+1,sy);
    s1.replace(y,y+1,sx);
    cout <<s1;
}
