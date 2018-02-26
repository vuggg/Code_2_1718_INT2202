#include <iostream>
#include <math.h>
#include <stdio.h>

int main()
{
	int x,y;
	std::cin >> x >> y;
	
	double khoangCach = sqrt(pow(x,2)+pow(y,2));
	
	printf("%.2lf",khoangCach);
}
