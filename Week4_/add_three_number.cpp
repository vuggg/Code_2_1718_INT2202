#include <iostream>
#include <algorithm>

using namespace std;
bool compare(int a, int b, int c, int x, int y, int z)
{
	if(x==a && y==b && z == c)
	{
		return false;
	}
	return true;
}

bool binarySearch(int arr[], int l, int r, int x)
{
   if (r >= l)
   {
        int mid = l + (r - l)/2;
 
        if (arr[mid] == x)  
            return true;
 
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid-1, x);
 
        return binarySearch(arr, mid+1, r, x);
   }
 
   
   return false;
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
	int **result = new int*[n], idx = 0;
	for(int i=0;i<n;i++)
	{
		result[i] = new int[3];
	}
	// 3 -4 1 0 -3 => -4 -3 0 1 3

	sort(arr,arr+n);
	bool seen = false;
	for(int i=0;i<n-1;i++)
	{
		int x = -(arr[i]+arr[i+1]);
		if( binarySearch(arr,0,n-1,x) )
		{
			seen = true;
			result[idx][0] = arr[i];
			result[idx][1] = arr[i+1];
			result[idx][2] = x;
			idx++;
		}
	}
	if(seen)
	{
		cout << result[0][0] <<" "<<result[0][1]<< " "<<result[0][2];
		cout << endl;
		for(int i=1;i<idx;i++)
	    {
		    if(compare(result[i-1][0],result[i-1][1],result[i-1][2],result[i][0],result[i][1],result[i][2]))
		    {
			    cout << result[i][0] <<" "<<result[i][1]<< " "<<result[i][2];
			    cout << endl;
		    }
	    }
	}
	
}
