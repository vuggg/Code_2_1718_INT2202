#include <iostream>

using namespace std;

int main()
{
	int N,Q;
	cin >> N >> Q;
	int ar[N][1000];
	for(int i=0;i<N;i++)
	{
		int k;
		cin >> k;
		for(int j=0;j<k;j++)
		{
			cin >> ar[i][j];
		}
	}
	int truy[Q][2];
	for(int i=0;i<Q;i++)
	{
		cin >> truy[i][0];
		cin >> truy[i][1];
	}
	for(int i=0;i<Q;i++)
	{
		cout << ar[ truy[i][0] ][ truy[i][1] ] << endl;
	}
}
