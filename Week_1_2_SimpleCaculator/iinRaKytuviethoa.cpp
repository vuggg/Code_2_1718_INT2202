#include <iostream>

int main()
{
	char c;
	std::cin >> c;
	
	if('a' <= c && c<= 'z')
	{
		std::cout << char(int(c)-32) << std::endl;
	}
	else
	{
		std::cout << c << std::endl;
	}
}
