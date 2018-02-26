#include <iostream>
#include <new>
#include <cstdlib>


using namespace std;
int checkAndCount(int **matrixx, int size);

int main()
{
	
	int n;
	cin >> n;
	
	int **step = (int **)calloc(n , sizeof(int *));
    for (int i=0; i<n; i++)
         step[i] = (int *)calloc(2 , sizeof(int));
	
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<2;k++)
		{
			cin >> step[i][k];
		}
	}
	
	int MAX = 0;
	
	
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<2;k++)
		{
			if(MAX < step[i][k])
			{
				MAX = step[i][k];
			}
		}
	}
	
	cout << MAX;
	
	// dynamically create array of pointers of size MAX
	int** matrixx = new int*[MAX];

	// dynamically allocate memory of size MAX for each row
	for (int i = 0; i < MAX; i++)
		matrixx[i] = new int[MAX];

	// assign values to allocated memory
	for (int i = 0; i < MAX; i++)
		for (int j = 0; j < MAX; j++)
			matrixx[i][j] = 0;

	for(int i=0;i<n;i++)
	{
		
			for(int k =0 ; k<step[i][0];k++ )
			{
				for(int f = 0;f<step[i][1];f++)
				{
					matrixx[k][f]++;
				}
			}
		
	}

	cout << checkAndCount(matrixx, MAX);	
}

int checkAndCount(int **matrixx, int size)
{
	int max = 0, count = 0;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(matrixx[i][j]>max)
			{
				max = matrixx[i][j];
			}
		}
	}
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(matrixx[i][j]==max)
			{
				count++;
			}
		}
	}
	return count;
}

