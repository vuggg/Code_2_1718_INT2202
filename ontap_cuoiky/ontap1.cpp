#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int matrix[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> matrix[i][j];
        }
    }
    int sum1 = 0,sum2 = 0;
    for(int i=0;i<n;i++)
    {
        sum1 = sum1 + matrix[i][i];
    }
    int j = n-1;
    for(int i=0;i<n;i++)
    {
        sum2 = sum2 + matrix[i][j];
        j--;
    }
    int x = fabs(sum1 - sum2);
    cout << x;
}
