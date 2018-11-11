#include <iostream>

using namespace std;

void count_(int *a, int n, int &neg, int &pos)
{
    neg = 0;
    pos = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0) neg++;
        if(a[i]>0) pos++;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int neg,pos;
    count_(a,n,neg,pos);
    cout << neg << " " << pos;

}
