#include <iostream>

using namespace std;
int uc(int a, int b)
{
    while(a!=b)
    {
        (a>b)? a=a-b:b=b-a;
    }
    return a;
}
int main()
{
    int a,b; cin >> a >> b;
    if(uc(a,b)==1) cout << "YES";
    else cout <<"NO";

}
