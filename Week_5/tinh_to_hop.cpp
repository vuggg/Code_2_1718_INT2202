#include <iostream>

using namespace std;

long factorial(int n)
{
  int c;
  long result = 1;

  for (c = 1; c <= n; c++)
    result = result * c;

  return result;
}
int tohop(int n, int k)
{
    return (( factorial( n ) ) / ( factorial(k) * factorial(n-k)));
}
int main()
{
   int arr[5000][2];
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

