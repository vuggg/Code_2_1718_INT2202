    #include <iostream>
	#include <cstring>
	
	
	using namespace std;
	
	int main()
	{
		char string[10000];
		cin >> string;
		int len = strlen(string);
		int j=len-1;
		
		
			for(int i=0;i<len-1;i++)
		{
			if(i!=j)
			{
				if(string[i]!=string[j])
				{
					cout << "No";
					return 0;
				}
			}
			j--;
		}
		cout << "Yes";
		
	}
