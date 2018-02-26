#include <iostream>
#include <new>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int *danhsach = new int[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> danhsach[i];
	}
	
	for(int i=0;i<n;i++)
	{
		if(danhsach[i]==42)
		{
			cout << "I've found the meaning of life!" << endl;
			exit(0);
		}
	}
	cout << "It's a joke!" << endl;
}
