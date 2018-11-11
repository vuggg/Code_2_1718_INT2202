#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>


using namespace std;

int main()
{
    ifstream in("matrix.txt");
    ofstream out("hieu.txt");
    if(!in)
    {
        cout << "can't open file\n";
        return -1;
    }
    int m,n;
    in >> m >> n;

    int arr[m][n];
    int sumchinh = 0;
    int sumphu = 0;


    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            in >> arr[i][j];
            if(i==j) sumchinh = sumchinh + arr[i][j];
            if(i+j == m-1) sumphu = sumphu + arr[i][j];
        }
    }

    out << sumchinh - sumphu ;


    int x;

    in >> x;
    cout << x;


}
