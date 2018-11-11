#include <iostream>
using namespace std;

int main()
{
    int m,n,k;
    cin >> m >> n >> k;
    int **matran = new char*[m];
    for(int i=0;i<m;i++)
        matran[i] = new char[n];

    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin >> matran[i][j];


}
