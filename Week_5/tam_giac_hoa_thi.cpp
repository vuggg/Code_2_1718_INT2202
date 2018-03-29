#include <iostream>
using namespace std;

void printRow(int m, int n)
{
    for(int i=0;i<m;i++)
        cout << " ";
    for(int j=0;j<n;j++)
        cout << "*";
    for(int k=0;k<m;k++)
        cout << " ";
    cout << endl;
}
int main()
{
    int n; cin >> n;
    int k = n-1, t = 1;
    for(int i=0;i<n;i++)
    {
        printRow(k,t);
        k--; t+=2;
    }
}
