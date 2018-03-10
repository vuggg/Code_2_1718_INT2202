#include <iostream>

using namespace std;
void mark(int n, int x, bool *a);
void eratosthenes(int n);

int main()
{
	int n;
	cin >> n;
	eratosthenes(n);
}

void eratosthenes(int n)
{
	bool a[n+1] = {false};
	for(int i=2;i<=n;i++)
	{
		if(a[i]==false)
		{
			cout << i << " ";
			mark(n,i,a);
		}
	}
}

void mark(int n, int x, bool *a)
{
	int idx = 2;
	while((idx*x)<=n)
	{
		a[idx*x] = true;
		idx++;
	}
}

