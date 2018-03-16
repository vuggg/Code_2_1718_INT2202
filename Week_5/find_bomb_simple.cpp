#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;
void create_matrix(char **matrix, int &m, int &n);
void setup_game_matrix(char **matrix, int &m, int &n, int &k);
void setup_guess_matrix(char **matrix, int &m, int &n, int &k);
void print_matrix(char **matrix, int &m, int &n);
int check_position(int m,int x);
char count(char **matrix, int &m, int &n, int idx, int jdx);
int play_game(char **matrix, char **guess, int &m, int &n, int &k);

int main()
{
	srand(time(NULL));
	int m,n,k; cin >> m >> n >> k;
	char **matrix = new char*[m]; 
	char **guess = new char*[m];
	setup_game_matrix(matrix, m, n, k);
	setup_guess_matrix(guess, m, n,k);
	play_game(matrix, guess, m,n,k);
}

void setup_game_matrix(char **matrix, int &m, int &n, int &k)
{
	create_matrix(matrix, m, n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			matrix[i][j] = '.';
		}
	}
	for(int i=0;i<k;i++)
	{
		int x = rand() % m; 
		int y = rand() % n;
		matrix[x][y] = '*';
	}
}
void setup_guess_matrix(char **matrix, int &m, int &n, int &k)
{
	create_matrix(matrix, m, n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			matrix[i][j] = '.';
		}
	}
}
void print_matrix(char **matrix, int &m, int &n)
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

void create_matrix(char **matrix, int &m, int &n)
{
	for(int i=0;i<m;i++)
	{
		matrix[i] = new char[n];
	}
}

bool check_bomb(char **matrix, int x, int y)
{
	if(matrix[x][y] == '*') return true;
	return false;
}

char count(char **matrix, int &m, int &n, int idx, int jdx)
{
	int count = 0;
	for(int i=-1;i<2;i++)
	{
		int k = idx+i;
		if(check_position(m,k))
		{
			for(int j=-1;j<2;j++)
			{
				int h = jdx+j;
				if(check_position(n,h))
				{
					if(matrix[k][h]=='*') count = count+1;
				}
			}
		}
	}
	return char(count + '0');
}
int check_position(int m,int x)
{
	if((x>=0 && x<m))
	{
		return 1;
	}
	return 0;
}

int play_game(char **matrix, char **guess, int &m, int &n, int &k)
{
	int count_true = 0;
	do
	{
		print_matrix(guess, m, n);
		int x, y; cin >> x >> y;
		if(check_bomb( matrix,  x,  y) )
		{
			cout << "YOU'RE DEAD!";
			return 0;
		}
		else
		{
			guess[x][y] = count(matrix, m,n,x,y);
			count_true++;
			
		}
	}while(count_true< m*n - k);
	return 1;
}

