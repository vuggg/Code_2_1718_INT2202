#include <iostream>
#include <new>

using namespace std;
void returnMaxMin(int *array, int& max, int& min, int n);
void countAndSum(int *array, int n, int &sum, int &count);

int main()
{
	int n;
	cin >> n;
	int array[n];
	for(int i=0;i<n;i++)
	{
		cin >> array[i];
	}
	int max=array[0], min=array[0], sum=0, count=0;
	returnMaxMin(array,max,min,n);
	countAndSum(array, n, sum, count);
	cout << max <<"\n" << min << "\n" << sum << "\n" << count << endl;
}
void returnMaxMin(int *array, int& max, int& min, int n)
{
	for(int i=0;i<n;i++)
	{
		if(max<array[i])
		{
			max = array[i];
		}
		if(min > array[i])
		{
		    min = array[i];
		}	
	}
}
void countAndSum(int *array, int n, int &sum, int &count)
{
	for(int i=0;i<n;i++)
	{
		if(array[i]%2==0)
		{
			sum += array[i];
		}
		if(array[i]%2!=0)
		{
			count++;
		}
	}
}
