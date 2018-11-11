#include <iostream>

using namespace std;

void frenquency(int arr[], int fren[], int n, int max)
{
    for(int i=0;i<n+1;i++)
    {
        fren[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        fren[ arr[i] ] += 1;
    }
}

int main()
{
    int n; cin >> n;
    int arr[n];
    int max = 0;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]>max) max = arr[i];
    }
    int fren[max+1];
    frenquency(arr,fren,n,max);

    for(int i=0;i<=n;i++)
    {
        if( fren[ i ] > 0 )
        {
            cout << i << " " << fren[ i ] << endl;
        }
    }

}
