#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int b[6];

    for(int i=0;i<n;i++)
    {
        b[ a[i]  ] += 1;
    }

    for(int i=0;i<6;i++)
    {
        cout << a[i] << " "<< b[a[i]] << endl;
    }
}
