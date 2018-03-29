#include <iostream>

using namespace std;

int factorial(int n)
{
    if(n<=1) return 1;
    return n*factorial(n-1);
}
int tohop(int n, int k)
{
    return (factorial( n ) / ( factorial(k) * factorial(n-k)));
}
int main()
{
   int arr[500][2];
   int i = -1;
   int idx = 0;
   do
   {
       i++;
       cin >> arr[i][0];
       cin >> arr[i][1];
       idx++;
   }while( arr[i][0]!= -1 && arr[i][1]!= -1);
   for(int i=0;i<idx-1;i++)
   {
       cout << tohop(arr[i][0],arr[i][1]);
       cout << endl;
   }
}

