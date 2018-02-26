#include <iostream>
#include <new>

using namespace std;
int lengthNumber(int n);
void intToArray(int n, int len, int *array);
int count(int n,int *array, int len);

int main()
{
	int n;
	cin >> n;
	int *listOfNumber = new int[n];
	
	for(int i = 0; i<n;i++)
	{
		cin >> listOfNumber[i];
	}
	
	int array[n][100];
	
	for(int i=0;i<n;i++)
	{
		int len = lengthNumber(listOfNumber[i]);
		intToArray(listOfNumber[i], len, array[i]);
	}
	
	for(int i=0;i<n;i++)
	{
		int len = lengthNumber(listOfNumber[i]);
		cout << count(listOfNumber[i],array[i],len);
		cout << "\n";
	}
	
}

int lengthNumber(int n)
{
	int i = 0;
	if(n==0)
	{
		return 0;
	}
	for(;n!=0;i++)
	{
		n = n/10;
	}
	return i;
}

void intToArray(int n, int len, int *array)
{
	//int len = lengthNumber(n);
	for(int i=len-1;n!=0;i--)
	{
		array[i] = n%10;
		n = n/10;
	}
}

int count(int n,int *array, int len)
{
	int count = 0;
	for(int i=0;i<len;i++)
	{
		if(array[i] != 0)
		{
			if(n%array[i]==0)
			{
				count++;
			}
		}
	}
	return count;
}


