#include <iostream>

using namespace std;
bool check(string a, string b);

int main()
{
	int n;
	cin >> n;
	string *a = new string[n];
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i].length()==a[j].length())
			{
				if(check(a[i],a[j]))
				{
					int len = a[i].length();
					cout << len << " " << a[i][len/2];
				}
			}
		}
	}
	
	delete[] a;
}
// abbc cbba
bool check(string a, string b)
{
	int len = a.length();
    int j = len -1;
	for(int i=0;i<len;i++)
	{
		if(a[i]!=b[j])
		{
			return false;
		}
		j--;
	}
	return true;
	
}
