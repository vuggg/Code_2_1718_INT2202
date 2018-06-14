#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int **matrix = new int*[m];
    for(int i=0;i<m;i++)
    {
        matrix[i] = new int[n];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> matrix[i][j];
        }
    }
    /*for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }*/

    int dem = n;
    bool check[n+1];
    for(int i=0;i<n;i++)
    {
        check[i] = true;
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(check[i])
            {
                bool kiemtra = true;
                for(int k=0;k<m;k++)
                {
                    if(matrix[k][i]!=matrix[k][j])
                    {
                        kiemtra = false;
                        break;
                    }
                }
                if(kiemtra)
                {
                    check[i] = false;
                    dem--;
                }
            }
        }
    }
    cout << dem;
}
