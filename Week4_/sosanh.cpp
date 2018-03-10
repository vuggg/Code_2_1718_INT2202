#include <iostream>
 
int main()
{
    double d1(100 - 99.99); // should equal 0.01
    double d2(10 - 9.99); // should equal 0.01
 
    if (d1 == d2)
        std::cout << "d1 == d2" << "\n";
    else if (d1 > d2)
        std::cout << "d1 > d2" << "\n";
    else if (d1 < d2)
        std::cout << "d1 < d2" << "\n";
    
    return 0;
}
