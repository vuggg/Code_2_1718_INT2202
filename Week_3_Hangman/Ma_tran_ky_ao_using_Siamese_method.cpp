#include <iostream>

using namespace std;
void buildMagicSquare (int N, int **m);

int main()
{
	int n;
	cin >> n;
	int **m = new int*[n];
	for(int i=0;i<n;i++)
	{
		m[i] = new int[n];
	}
    buildMagicSquare (n,m);
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		cout << m[i][j] << " ";
		}
		cout << endl;
	}
	
}

void buildMagicSquare (int N, int **m)
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            m[i][j] = 0;

    int i, j;
    int key = 1;
    int NN = N * N;
    i = 0;
    j = (N - 1) / 2;
    m[i][j] = key++;  // middle of the top row
    while (key <= NN) {
        int ii, jj;  // try, look ahead beforehand

        if (i > 0) ii = i-1;
        else       ii = N-1;

        if (j < N-1) jj = j+1;
        else         jj = 0;

        if (m[ii][jj] != 0)  // taken cell
            i = (i+1) % N;   // go down
        else {
            i = ii;  // alright, take them
            j = jj;
        }
        m[i][j] = key++;
    }
}
