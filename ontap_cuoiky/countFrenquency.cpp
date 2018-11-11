#include <iostream>
#include <vector>
#include <algorithm>
#include <new>

using namespace std;

void maxFrenquency(int arr[], int n)
{
    int **store = new int*[n];
    for(int i=0;i<n;i++)
    {
        store[i] = new int[2];
    }
    int x = arr[0];
    int max = 0;
    int counting = 0;
    int k = 0;
    int idx = 0;
    //int count = 0;
    for(int i=0;i<n;i++)
    {
        /// 1 1 1 2 4 4 4 6
        idx = i;
        while(arr[idx] == arr[idx+1]) idx++;
        store[k][0] = arr[i];
        store[k][1] = idx - i +1;
        k++;
        i = idx;
    }
    int maxFren = store[0][1];
    for(int i=0;i<k;i++)
    {
        if(store[i][1]>maxFren) maxFren = store[i][1];
    }
    for(int i=0;i<k;i++)
    {
        if(store[i][1] == maxFren) cout << store[i][0] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    //sort(arr,arr+n);
    maxFrenquency(arr, n);
}
