#include <iostream>
#include <iomanip>
using namespace std;
int check(double diem, double heso);

int main()
{
	int n;
	cin >> n;
	
	double diem[n][2];
	double tongHeSo = 0;
	double diemTong = 0;
	for(int i = 0;i<n;i++)
	{
		for(int j=0;j<2;j++)
		{
			cin >> diem[i][j];
		}
		int k = check(diem[i][0],diem[i][1]);
		if(k)
		{
			if(k==1)
			{
				cout << "Sai diem so";
				return 0;
			}
			else if(k==2)
			{
				cout << "Sai he so";
				return 0;
			}
		}
		tongHeSo = tongHeSo + diem[i][1];
		diemTong = diemTong + diem[i][0]*diem[i][1];
	}
	
    
	cout << "Tong so mon hoc can tinh DTB: " << n << endl;
	for(int i=0;i<n;i++)
	{
		
		cout << fixed << setprecision(1)<< "Diem mon hoc "<<i << ": "<< diem[i][0] << endl;
		cout << fixed << setprecision(1) << "He so mon hoc "<<i << ": "<< diem[i][1] << endl;		
	}
	cout << "Tong so he so: " << fixed << setprecision(1)<< tongHeSo << endl;
	cout << fixed << setprecision(1)<< "Diem trung binh cua " << n << " " << "mon hoc: "<< fixed << setprecision(1)<< diemTong/tongHeSo;
		
}


int check(double diem, double heso)
{
	if(diem<0 || diem>10)
		{
			return 1;
		}
	if(heso == 1 || heso == 1.5 || heso== 2 || heso== 2.5 || heso== 3)
	{
		return 0;
	}
	else
	{
		return 2;
	}
	return 0;
	
}
