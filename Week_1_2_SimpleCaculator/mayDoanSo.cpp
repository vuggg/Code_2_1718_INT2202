#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));
	int guesNumber;
	
    cin >> guesNumber;
    
    int machineNumber = rand() % 100000 + 1;
    
    int count = 1;
    
    while(machineNumber!= guesNumber)
    {
    	machineNumber = rand() % 100000 +1;
    	count = count + 1;
	}
	
	if(machineNumber == guesNumber)
	{
		cout << "so chinh xac la: " << machineNumber << endl;
		cout << "so lan random: " << count << endl;
	}
		
}




