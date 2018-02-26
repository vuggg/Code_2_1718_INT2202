#include <iostream>

int main()
{
	int a = 10;
	int *p = &a;
	
	std::cout << *p;  
	
	*p = 20;
	
	std::cout << a;
}
