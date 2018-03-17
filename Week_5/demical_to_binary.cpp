#include <iostream>

using namespace std;
void demical_to_binary(int n, char *a);

int main()
{
	int n; cin >> n;
	char a[1000];
	demical_to_binary(n,a);
	cout << a;
}

void demical_to_binary(int n, char *a)
{
	int idx = 0;
	while(n>0)
	{
		a[idx] = n%2 + '0';
		n = n/2;
		idx++;
	}
	int jdx = idx -1;
	for(int i=0;i<(idx/2);i++)
	{
		char t = a[i];
		a[i] = a[jdx];
		a[jdx] = t;
		jdx--;
	}
	a[idx] = '\0';
}

