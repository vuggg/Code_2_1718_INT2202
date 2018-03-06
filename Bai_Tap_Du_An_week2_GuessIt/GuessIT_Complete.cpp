#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
int generateRandomNumber();
int getPlayerGuess();
void printAnswer(int guestNumber, int hostNumber);

int main()
{
	int hostNumber = generateRandomNumber();
	int guestNumber =0;
	int maxPlay = 20, idx = 1;
	do
	{
		guestNumber = getPlayerGuess();
		printAnswer( guestNumber,  hostNumber);
		idx++;
		
	}while(hostNumber!=guestNumber && idx<=20);
	
}
int generateRandomNumber()
{
    return 45;
}
int getPlayerGuess()
{
    int n;
    cin >> n;
    cout << "Enter your guess: ";
    return n;
}
void printAnswer(int guestNumber, int hostNumber)
{
    if(guestNumber==hostNumber)
    {
        cout << "Congratulations !!!\n";
    }
    else if(guestNumber<hostNumber)
    {
        cout << "Your number is too small.\n";
    }
    else
    {
        cout <<"Your number is too big.\n";
    }
}

