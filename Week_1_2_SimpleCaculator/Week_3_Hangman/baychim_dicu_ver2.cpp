#include <iostream>
#include <algorithm>

using namespace std;
void find_frenquency(int arr[], int n);

int main()
{
    int n = 6;
    //cin >> n;
    int arr[] = {1, 4, 4, 4, 5, 3};
    /*for(int i=0;i<n;i++)
    {
    	cin >> arr[i];
	}*/
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
    	cout << arr[i] << " ";
	}
    find_frenquency(arr,n);
}
void find_frenquency(int arr[], int n)
{
    int candidate[n];
    int count[n];
    for(int i=0;i<n;i++)
    {
    	count[i] = 1;
	}
    int idx = 0;
    for(int i = 0;i<n;)
    {
    	candidate[idx] = arr[i];
    	cout << "candidate: " << i << candidate[idx] << endl;
    	for(int j=i+1;j<n;j++)
    	{
    		if( candidate[idx] == arr[j] )
    		{
    			count[idx] = count[idx] +1 ;
    			cout <<" count thu: " << j << count[idx] << endl;
    			continue;
			}
			else
			{
				i = j;
				idx=idx+1;
				cout << "i sau truoc khi break: " << i << endl;
				cout << "idx truoc khi break: " << j << endl; 
				cout << "candidate truoc bi break: " << candidate[idx] << endl;
				break;
			}
		}
		if(i==(n-1))
		{
			cout << " khi i == n-1: " << endl;
			break;
		}
	}
	
	int i_max = 0;
	int count_max = 1;
	for(int i=0;i<=idx;i++)
	{
		if(count[i] > count_max )
		{
			i_max = i;
		}
	}
	cout << candidate[i_max];
 }
