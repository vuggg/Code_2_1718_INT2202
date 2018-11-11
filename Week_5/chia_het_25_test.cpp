#include <iostream>
#include <cmath>
#include <new>
#include <algorithm>

using namespace std;

int *genNumbers(int N)
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
    int k;
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if( (arr[i] + arr[j] + arr[j+1]) %25  ==0 )
            {
                cout << arr[i] <<" "<<arr[j] <<" "<<arr[k]<< endl;
                k++;


            }
            else{
                j++
                continue;
            }
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

