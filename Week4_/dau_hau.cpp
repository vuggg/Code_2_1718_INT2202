#include <iostream>
#include <algorithm>

using namespace std;

struct Toado
{
	int x,y;
};
bool check_duong_cheo(Toado *toado, int n);
int main()
{
	int n;
	cin >> n;
	Toado toado[n];
	for(int i=0;i<n;i++)
	{
		cin >> toado[i].x >> toado[i].y;
	}
	if(check_duong_cheo(toado,  n))
	{
		cout << "yes";
	}
	else cout << "no";
	
}

bool check_duong_cheo(Toado *toado, int n)
{
	int count_check1 = 0; int count_check2 = 0;
	bool hang_cot = false;
	for(int i=0;i<n;i++)
	{
		if(toado[i].x + toado[i].y == n+1) count_check1++;
		if(toado[i].x == toado[i].y) count_check2++;
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(toado[i].x == toado[j].x) hang_cot = true;
			if(toado[i].y == toado[j].y) hang_cot = true;
		}
	}
	if(count_check1>=2 || count_check2>=2 || hang_cot) return true;
	
}

