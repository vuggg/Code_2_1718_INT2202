#include <iostream>

using namespace std;

int giaithua(int n)
{
    if(n==1 || n==0 ) return 1;
    return giaithua(n-1)*n;
}
int tohop(int n, int k)
{
    return (giaithua(n))/((giaithua(k))*giaithua(n-k));
}
int main()
{
    int n,k; cin >> n >> k;
    string anpha = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<n-k;i++)
    {
        cout << anpha.at(i);
        for(int j=i+1;j<k;j++)
        {
            cout << anpha.at(j);
        }
        cout << endl;
    }
}
