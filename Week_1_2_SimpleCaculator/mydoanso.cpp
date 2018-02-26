#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	
	int guesNumber;
    cin >> guesNumber;
    
    int randomNumber = rand() % 100000 + 1;
    
    int count = 1;
    
    while(randomNumber != guesNumber)
    {
    	if(randomNumber < guesNumber)
    	{
    		randomNumber = rand() % (100000-randomNumber) + randomNumber;
    		count = count +1;
		}
		else
		{
			randomNumber = rand() % randomNumber +1 ;
			count = count +1;
		}
	}
	
	if(randomNumber == guesNumber)
	{
		cout << "so chinh xac " << randomNumber << endl;
		cout << "so lan doan " << count << endl;
	}
}


