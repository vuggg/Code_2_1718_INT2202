#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	double diem[6];
	int i;
	
	for(i=0;i<5;i++)
	{
		cin >> diem[i];
	}
	
	double trungbinh = diem[0] + diem[1]  + diem[2]+  diem[3] + diem[4] + diem[5];
	
	printf("%.2lf",trungbinh/5);
	
	
}
