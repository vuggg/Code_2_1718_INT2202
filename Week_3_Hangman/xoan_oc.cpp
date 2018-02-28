#include <iostream>

using namespace std;

void printSpiralOrder(int arr[], int m, int n)
{
	int M = m; int N = n;
	int mat[M][N];
	int top = 0, bottom = M - 1;
	int left = 0, right = N - 1;

	int index = 0;

	while (1) 
	{
		if (left > right)
			break;
		// print top row
		for (int i = left; i <= right; i++)
			mat[top][i] = arr[index++];
		top++;

		if (top > bottom)
			break;
		// print right column
		for (int i = top; i <= bottom; i++)
			mat[i][right] = arr[index++];
		right--;

		if (left > right)
			break;
		// print bottom row
		for (int i = right; i >= left; i--)
			mat[bottom][i] = arr[index++];
		bottom--;

		if (top > bottom)
			break;
		// print left column
		for (int i = bottom; i >= top; i--)
			mat[i][left] = arr[index++];
		left++;
	}
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << mat[i][j] << " ";
		}
		cout << endl;
	}
	
}

int main()
{
	int m,n;
	cin >> m >> n;
	int num = m*n; 
	
	int arr[num];
	int idx = 1;
	for(int i=0;i<num;i++)
	{
		arr[i] = idx;
		idx++;
	}
	
	printSpiralOrder(arr, m,n);
	
	return 0;
}
