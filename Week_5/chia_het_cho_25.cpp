#include <iostream>
#include <cmath>
#include <new>
#include <algorithm>

using namespace std;

int* genNumbers(int N)
{
    int *arr = new int[N];
    for(int i=0;i<N;i++)
    {
        arr[i] = rand() % 50;
    }
    return arr;
}
void printNumbers(int *arr, int n)
{
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        int j = i+1;
        int k = n-1;
        while(j<k)
        {
            int t = arr[i] + arr[j] + arr[k];
            if(t%25==0 && t!=0 )
            {
                cout << arr[i]<<" "<<arr[j]<<" "<< arr[k]<< endl;
                while( j <n-1 && ( arr[j] == arr[j+1] ) ) j++;
                while( k>0 && ( arr[k] == arr[k-1] ) ) k--;
                j++; k--;
            }
            double f = double(t)/25;
            (f>0)? k--: j++;
        }
        while(i<n-2 && (arr[i] == arr[i+1])) i++;
    }
}
int main() {
    int seed = 1; //Test cases use different seed numbers
    srand(seed);
    int n;
    cin >> n;
    int *a = genNumbers(n);
    printNumbers(a, n);
}
