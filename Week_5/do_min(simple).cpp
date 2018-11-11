#include <iostream>

using namespace std;

bool check_died(char **matrix, int m, int n, int x, int y)
{
    if(matrix[x][y]=='M') return true;
    return false;
}
void print_matrix(char **matrix, int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout  <<matrix[i][j];
        }
        cout << endl;
    }
}
void print_matrix2(int **matrix, int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int check(int m,int x)
{
	if((x>=0 && x<m))
	{
		return 1;
	}
	return 0;
}
int rada(char **matrix, int m, int n, int idx, int jdx)
{
	int count_ = 0;
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
					if(matrix[k][h]=='M')
					{
						count_ = count_+1;
					}
				}
			}
		}
	}
	return count_;
}
int main()
{
    int m,n,k; cin >> m >> n >> k;
    int max_ =  m*n - k;
    char **matrix = new char*[m];
    for(int i=0;i<m;i++)
    {
        matrix[i] = new char[n];
    }
    int **matrix2 = new int*[m];
    for(int i=0;i<m;i++)
    {
        matrix2[i] = new int[n];
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> matrix[i][j];
            matrix2[i][j] = -1;
        }
    }
    int count_true = 0;
    int X, Y;
    while (cin >> X >> Y)
    {

        if(check_died(matrix,m,n,X,Y))
        {
            cout << "YOU\'RE DEAD!" << endl;
            print_matrix(matrix,m,n);
            break;
        }
        else{
            matrix2[X][Y] = rada(matrix,m,n,X,Y);
            print_matrix2(matrix2,m,n);
            count_true++;
        }
    };
    return 0;
}
