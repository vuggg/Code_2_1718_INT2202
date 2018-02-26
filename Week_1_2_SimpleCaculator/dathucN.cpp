#include <iostream>

using namespace std;

int main()
{
	char a[101],b[101],c[101];
	
	cin >> a >> b;
	
	char *p = a;
	char *q = b;
	
	*p = *q;
	
	cout << a;
}

void swapAdress()
{
	
}
