#include <iostream>
#include <cstring>

using namespace std;

void moveArray (char a[], char b[]); 
char* addBigNumber(char a[], char b[]);

int main()
{
	char stringA[101],stringB[101],stringC[101];
	
	cin >> stringA >> stringB >> stringC;
	
    moveArray(stringA,stringB);
	
	cout << stringA << "\n" << stringB << " \n ---------";
	
	char add[103] = addBigNumber(stringA,stringB);
	
	cout << add ;
	
}

void moveArray (char a[], char b[])
{
	int lenA = strlen(a);
	int lenB = strlen(b);
	
	char newArray[lenA];
	
	for(int i = 0;i<lenA-lenB; i++)
	{
		newArray[i] = '0';
	}
	int j = 0;
	for(int i=lenA- lenB; i <lenA ; i++)
	{
		newArray[i] = b[j];
		j++;
	}
	
	for(int i = 0;i<lenA;i++)
	{
		b[i] = newArray[i];
	}
	b[lenA] = '\0';
}

char* addBigNumber(char a[], char b[])
{
	char newString[103];
	bool remember = false;
	int idx = 0;
	
	for(int i=strlen(a);i>=0;i--)
	{
		int temp = a[i] + b[i] - '0';
		if(remember)
		{
			temp++;
		}
		if(temp>9)
		{
			remember = true;
		}
		else
		{
			remember = false;
		}
		
		temp = team%10;
		
		newString[idx] = temp + '0';
		idx++;
	}
	
}

