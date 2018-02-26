#include <bits/stdc++.h>
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
    else if(op=='%')
    {
    	return num1%num2;
	}
}

double mathFunc(double num, string op)
{
    if(op.compare("sin")==0)
    {
        return sin(num);
    }
    else if(op.compare("cos")==0)
    {
        return cos(num);
    }
    else if(op.compare("sqrt")==0)
    {
        return sqrt(num);
    }
}

string getError(double num, string op) 
{
    if((op.compare("sqrt")==0 && num >=0) || op.compare("cos")==0 ||op.compare("sin")==0 )
    {
    	return "";
	}
	else
	{
		return "Invalid function";
	}
}

string getError(int num1, int num2, char op)
{
    if('/' == op || '%' == op)
    {
        if(num2==0)
        {
            return "Divided by zero";
        }
        else
        {
            return "";
        }
    }
    else if('x' ==op ||'+'==op||'-'==op )
    {
        return "";
    }
    else
    {
        return "Invalid operator";
    }
}

void calculate(int argc, char* argv[])
{
	if(argc==3)
	{
		double num = atoi(argv[2]);
		string getEr = getError(num,argv[1]);

		if(getEr.compare("")==0)
		{
			double result = mathFunc(num, argv[1]);
			cout << fixed << setprecision(2) << result << endl;
		}
		else
		{
			cout << getEr << endl;
		}
	}
	else if(argc == 4)
	{
		int num1 = atoi(argv[1]);
		int num2 =  atoi (argv[3]);

		
		string getEr = getError(num1,num2,argv[2][0]);
		
		if(getEr.compare("")==0)
		{
			int result = arithmetic(num1,num2,argv[2][0]);
			cout << result << endl;
		}
		else
		{
			cout << getEr << endl;
		}
	}
}

int main() {
    int argc;
    cin >> argc;
    char* argv[argc];

    for(int i = 1; i < argc; i++) {
        argv[i] = new char[20];
        cin >> argv[i];
    }

    calculate(argc, argv);
}
