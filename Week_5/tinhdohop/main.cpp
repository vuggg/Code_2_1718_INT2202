#include <iostream>
#include "function.hpp"

using namespace std;

int main()
{
    int n[100], k[100];
    int soPhanTu = 0;
    nhapKN(k,n,soPhanTu);
    for(int i=0;i<soPhanTu;i++)
    {
        cout << toHop(n[i],k[i]);
        cout << endl;
    }
}
