#include <iostream>
#include <stdlib.h>
#include <ctime>

using namespace std;

int myRandom(int n)
{
    srand(time(nullptr));
    return rand() %n;
}

int main() {
    int seed = 1; //Test cases use different seed numbers
    srand(seed);
    int n;
    cin >> n;

    cout << myRandom(n) << endl;

    return 0;
}
