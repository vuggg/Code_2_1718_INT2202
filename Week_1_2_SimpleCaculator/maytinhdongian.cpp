#include<iostream>
using namespace std;

int arithmetic(int num1, int num2, char op)
{
    if(op == '+')
    {
        return num1 + num2;
    }
    else if(op == '-')
    {
        return num1 - num2;
    }
    else if(op == 'x')
    {
        return num1*(num2);
    }
    else if(op == '/')
    {
        return num1/num2;
    }
}

int main() {
	int n1, n2;
	char op;
	cin >> n1 >> op >> n2;
	cout << arithmetic(n1, n2, op);

	return 0;
}

