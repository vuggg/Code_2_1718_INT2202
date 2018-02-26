#include <iostream>
#include <new>

using namespace std;
void maxMin(double list[], int n);

int main()
{
	int n;
	cin >> n;
	double *list = new double[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> list[i];
	}
	maxMin(list,n);
	
}

void maxMin(double list[], int n)
{
	double max = list[0];
	double min = list[0];
	for(int i=0;i<n;i++)
	{
		if(list[i]>max)
		{
			max = list[i];
		}
		if(list[i]<min)
		{
			min = list[i];
		}
	}
	cout << max<< "\n" << min;
}

