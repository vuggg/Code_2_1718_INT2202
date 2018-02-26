#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

void calculate(int argc, char* argv[])
{
    if(argc ==3 )
    {
    	double num = atoi(argv[2]);
        cout << mathFunc(num,argv[1]);
    }
    else if(argc==4)
    {
    	int num1 = atoi(argv[1]),num2 = atoi(argv[3]);
    	
        cout << arithmetic(num1,num2,argv[2]);
    }
}

// YOUR CODE GOES HERE

int main() {
    int argc;
    cin >> argc;
    char* argv[argc];

    for(int i = 1; i < argc; i++) {
        argv[i] = new char[20];
        cin >> argv[i];
    }

    calculate(argc, argv);

    return 0;
}
