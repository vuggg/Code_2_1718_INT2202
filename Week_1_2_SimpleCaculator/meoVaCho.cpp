#include <iostream>

using namespace std;

int main()
{
	int soChan, soCon;
	cin >> soCon >> soChan ;
	
	if(soChan%2 != 0 )
	{
		cout << "invalid" << endl;
		exit(0);
	}
	
	int i,j;
	
	for(i=1;i<=soCon;i++)
	{
		for(j=0;j<= soCon - i ; j++)
		{
			if(i*4 + j*2 == soChan)
			{
				cout << "chicken = " << j << " dog = " << i << endl;
				exit(0);
			}
		}
	}
	
	cout << "invalid" << endl;
	
	
}
