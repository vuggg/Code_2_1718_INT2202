// 1 1 3 3 4 4 6
// 1 3 4 5

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;  
bool compare(int a, int b, int c, int x, int y, int z);
void printt(int **result, int n, bool seen);

int main()
{
	int n;
	cin >> n;
	int arr[n], idx = 0;
	for(int i = 0;i<n;i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n);
    // while (j < n && a[j] == a[j+1]) j++
	for(int i=0;i<n-2;i++)
	{
		int j = i+1;
		int k = n-1;
		while(j<k)
		{ 
			
			int t = arr[i]+arr[j]+arr[k];
			if(t==0)
			{
				
				cout << arr[i] <<" " << arr[j] <<" " << arr[k] << endl;
				while (j < n-1 && arr[j] == arr[j+1]) j++;
				while (k >0 && arr[k] == arr[k-1]) k--;
				j++; k--;
				//cout << i << " " << j << " " << k << endl;
			} 
			else if(t>0)
			{
				k--;
			}
			else
			{
				j++;
			}
		}
		while (i < n -2 && arr[i] == arr[i+1]) i++;
	}
}

/*

***Error***
terminate called after throwing an instance of 'std::bad_array_new_length'
  what():  std::bad_array_new_length
Task failed with signal 6
** Further testing aborted **
------
***Error***
terminate called after throwing an instance of 'std::bad_alloc'
  what():  std::bad_alloc
Task failed with signal 6
** Further testing aborted **


*/
