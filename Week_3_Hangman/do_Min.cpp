#include <iostream>
#include <new>

using namespace std;
char rada(char **array, int m, int n, int idx, int jdx);
int check(int m,int x);

int main()
{
	int m, n;
	cin >> m >> n;
    
    // creat
	char **matrix = new char*[m];
	for(int i=0;i<m;i++)
	{
		matrix[i] = new char[n];
	}
	char **result = new char*[m];
	for(int i=0;i<m;i++)
	{
		result[i] = new char[n];
	}

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> matrix[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(matrix[i][j]=='.')
			{
				result[i][j] = rada(matrix,m,n,i,j);
			}
			else if(matrix[i][j]=='*')
			{
				result[i][j] = '*';
			}
		}
	}
	/*for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << result[i][j] << " ";
		}
		cout << endl;
	}*/
}

char rada(char **matrix, int m, int n, int idx, int jdx)
{
	int count = 0;
	for(int i=-1;i<2;i++)
	{
		int k = idx+i;
		if(check(m,k))
		{
			for(int j=-1;j<2;j++)
			{
				int h = jdx+j;
				if(check(n,h))
				{
					if(matrix[k][h]=='*')
					{
						count = count+1;
					}
				}
			}
		}
	}
	char b = char(count + '0');
	return b;
}
int check(int m,int x)
{
	if((x>=0 && x<m))
	{
		return 1;
	}
	return 0;
}
