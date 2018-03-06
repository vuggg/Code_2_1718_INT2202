#include <iostream>

using namespace std;
char readAGuess();

int main()
{
	readAGuess();
}

char readAGuess()
{
	char a;
	cout << "Please enter your next guess: ";
	cin >> a;
	return a;
}
