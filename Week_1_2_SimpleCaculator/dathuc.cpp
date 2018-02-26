#include <cmath>
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;
int check(string a);

int main()
{
	string a,b,c;
	
	cin >> a >> b >> c;
	
	if(check(a)!=-1)
	{
		int intA = atoi(c.c_str()) - atoi(b.c_str());
		
		stringstream ss;
		
		ss << intA << endl;
		
		string newString = ss.str();
		
		cout << newString[check(a)] << endl;
		
	}
	else if(check(c)!=-1)
	{
		int intC =  atoi(a.c_str()) + atoi(b.c_str());
		stringstream ss;
		
		ss << intC << endl;
		
		string newString = ss.str();

		cout << newString[check(c)];
	}
	else
	{
		int intB = atoi(c.c_str()) - atoi(a.c_str());
		stringstream ss;
		
		ss << intB << endl;
		
		string newString = ss.str();

		cout << newString[check(b)];
	}
	
}

int check(string a)
{
	int check = -1;
	for(int i=0;i<a.length();i++)
	{
		if(a[i]=='?')
		{
			return i;
		}
		
	}
	if(check==-1)
	{
		return -1;
	}
}
