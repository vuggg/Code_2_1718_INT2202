#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
	
	int randomNumber, guesNumber;
	
	srand(time(NULL));
	
	randomNumber = rand() % 100 +1 ;
	
	cout << "xin moi ban doan so: " << endl; 
	cin >> guesNumber;
	
	int count = 1 ;
	
	while(randomNumber != guesNumber)
	{
		if(randomNumber > guesNumber)
		{
			cout << "ban can chon so lon hon: " << endl;
			cin >> guesNumber ;
			count = count +1;
		}
		else
		{
			cout << "ban can chon so nho hon: " << endl;
			cin >> guesNumber ;
			count = count +1;
		}
		
	}
	
	if(guesNumber == randomNumber)
	{
		cout << "chuc mung ban da chien thang!" << endl;
		cout << "ban da doan so lan la: " << count << endl;
	}
	
}

