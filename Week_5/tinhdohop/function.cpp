#include "function.hpp"
int factorial(int n)
{
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}

int toHop(int n, int k)
{
    return factorial(n)/(factorial(k)*factorial(n-k));
}

int kiemTra(int n, int k)
{
    if((n>= 1 && n<= 20) && (k>=0 && k<= n)) return 1;
    return 0;
}

void nhapKN(int k[], int n[], int &soPhanTu)
{
    do
    {
        cin >> k[soPhanTu];
        cin >> n[soPhanTu];
        soPhanTu++;
    }while(kiemTra(n[soPhanTu],k[soPhanTu]));
}

