#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];

    }
    int re[11] = {0};
    for(int i=0;i<n;i++)
    {
        re[ arr[i] ]++;
    }
    bool check = false;
    for(int i=1;i<11;i++)
    {
        if(re[i] %2 ==0 && re[i] > 0)
        {
            check = true;
            cout << i << endl;
        }
    }
    if( !check ) cout << 0;
}
