#include <iostream>

struct PT
{
	int a,b,c;
};

using namespace std;

int main()
{
	PT pt[2];
	for(int i=0;i<2;i++)
	{
		cin >> pt[i].a >> pt[i].b >> pt[i].c;
	}
	int D = pt[0].a*pt[1].b-pt[1].a*pt[0].b;
	// cb'-c'b      
	int Dx = pt[0].c*pt[1].b - pt[1].c*pt[0].b;
	int Dy = pt[0].a*pt[1].c - pt[1].a*pt[0].c;
	if(D==0 && (Dx!=0 || Dy !=0 ))
	{
		cout << "Vo nghiem";
    }
    else if(D==0 && Dx ==0 && Dy ==0)
    {
    	cout << "Vo so nghiem";
	}
	else 
	{
		cout << Dx/D << " " << Dy/D;
	}
}

