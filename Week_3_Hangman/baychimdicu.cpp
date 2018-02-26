#include <iostream>
#include <new>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int array[n];
	int frenquency[n] = {0};
	
	for(int i=0;i<n;i++)
	{
		cin >> array[i];
	}
	
    for(int i=0;i<n;i++)
    {
    	int found = 0;
    	for(int j=0;i<i;j++)
    	{
    		if(array[i]==array[j])
    		{
    			found++;
			}
		}
		
		if(found==0)
		{
			int count = 1;
			for(int j=i+1;j<n;j++)
			{
				if(array[i]==array[j])
				{
					count++;
				}
			}
			
			cout << array[i] << ":" << count << endl; 
		}
		
	}
	/*int max = 0;
	for(int i=0;i<n;i++)
	{
		if(frenquency[i]>max)
		{
			max = frenquency[i];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		if(frenquency[i]==max)
		{
			cout << array[i];
		}
	}*/
    
}
