#include <iostream>
#include <new>

using namespace std;
void quickSort(int *listOfNumber, int l, int r, int n);

double abs(double a)
{
	if(a==0)
	{
		return 0;
	}
	else if(a>0)
	{
		return a;
	}
	return -a;
}

void bubbleSort(int *listOfNumber, int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(listOfNumber[j]<listOfNumber[j-1])
			{
				int k = listOfNumber[j];
				listOfNumber[j] = listOfNumber[j-1];
				listOfNumber[j-1] = k;
			}
		}
	}
}

int main()
{
	int n;
	cin >> n;
	
	int *listOfNumber = new int[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> listOfNumber[i];
	}
	
	quickSort(listOfNumber, 0,n-1,n);
	
	for(int i=0;i<n;i++)
	{
		cout << listOfNumber[i] <<" ";
	}
}


void quickSort(int *a, int l, int r, int n)
{
	int i,j;
	int x;
	x = a[(l+r)/2];
	i = l; j = r;
	
	do{
		while(a[i]<x) i++;
		while(a[j]>x) j--;
		if(i<=j)
		{
			int k = a[i];
			a[i] = a[j];
			a[j] = k;
			i++; j--;
		}
    }while(i<j);
    if(i<r) quickSort(a,i,r,n);
}

