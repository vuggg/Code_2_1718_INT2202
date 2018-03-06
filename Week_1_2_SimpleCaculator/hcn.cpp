#include <iostream>
#include <new>
#define MAX 100

using namespace std;


struct STEP
{
	int u,v;
};
void returnUmaxVmax(STEP *step,int &minu, int &minv, int n);
int main()
{
	int n;
	cin >> n;
	STEP *step = new STEP[MAX];
	for(int i=0;i<n;i++)
	{
		cin >> step[i].u >> step[i].v;
	}
	int max = step[0].u;
	int min = step[0].v;
	returnUmaxVmax(step,max, min,n);
	cout << max*min;
	
}

void returnUmaxVmax(STEP *step,int &minu, int &minv, int n)
{
	for(int i=0;i<n;i++)
	{
		if(minu<step[i].u)
		{
			minu = step[i].u;
		}
		if(minv<step[i].v)
		{
			minv = step[i].v;
		}
	}
}


