#include <iostream>
#include <cmath>

using namespace std;
int fibonaci(int n);

// A utility function that returns true if x is perfect square
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
 
// Returns true if n is a Fibinacci Number, else false
bool isFibonacci(int n)
{
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perferct square
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}
 
 
int main()
{
	int n;
	cin >> n;
	
    isFibonacci(n)? cout << "Thuoc day Fibonacci \n":
                     cout <<" Khong thuoc day Fibonacci \n" ;
                     
	for(int i=1;fibonaci(i)<=n;i++)
	{
		cout << fibonaci(i) <<" ";
	}
}

int fibonaci(int n)
{
	if(n==1 || n==2)
	{
		return 1;
	}
	else
	{
		return fibonaci(n-1) + fibonaci(n-2);
	}
}
