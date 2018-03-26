#include <iostream>
#include <cmath>
using namespace std;

int rnd(double x)
{
    int a = floor(x);
    if((x-a)>0.5) return ceil(x);
    return a;
}

int main() {
    double x;
    cin >> x;

    cout << rnd(x);

    return 0;
}
