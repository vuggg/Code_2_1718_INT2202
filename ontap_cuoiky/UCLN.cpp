#include <iostream>
#include <math.h>

using namespace std;

int ucln(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if(a==0 || b==0) return a+b;
    while(a!=b)
    {
        if(a>b) a = a-b;
        else b = b-a;
    }
    return a;
}

int uclns(int arr[], int n = 4)
{
    ///  1 2 3 4
    int uc = ucln(arr[0],arr[1]);
    for(int i=2;i<n;i++)
    {
        uc = ucln(uc,arr[i]);
    }
    return uc;
}

int main()
{
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin >> arr[i];
    }
    cout << uclns(arr);
}
