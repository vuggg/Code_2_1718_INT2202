#include <iostream>
#include <string>
#include <cmath>
#include <stdint-gcc.h>
using namespace std;
int container[7];                       /// every element contains a number between 0 and 999
string conv0to19(uint64_t);   /// converts 1 to 19 to its name
string conv_dec(uint64_t);    /// converts 20,30...,90 to its name
string convert(uint64_t);       ///converts a number from of range uint64_t to its name
void fillContainer(uint64_t);
string convert1to999(uint64_t, int);

string name[]={"","thousand","million","billion","trillion","quadrillion","quintillion"};

string conv0to19(uint64_t a)
{
    switch (a)
    {
        case 0:return "";   break;
        case 1:return "one ";  break;
        case 2:return "two ";  break;
        case 3:return "three ";break;
        case 4:return "four "; break;
        case 5:return "five "; break;
        case 6:return "six ";  break;
        case 7:return "seven ";break;
        case 8:return "eight ";break;
        case 9:return "nine "; break;
        case 10:return "ten ";  break;
        case 11:return "eleven "; break;
        case 12:return "twelve "; break;
        case 13:return "thirteen ";break;
        case 14:return "fourteen "; break;
        case 15:return "fifteen "; break;
        case 16:return "sixteen "; break;
        case 17:return "seventeen ";break;
        case 18:return "eighteen ";break;
        case 19:return "nineteen ";break;
    }
}

string conv_dec(uint64_t a)
{
    switch(a)
    {
        case 0:return "";break;
        case 1:return "";break;
        case 2:return "twenty-";   break;
        case 3:return "thirty-";  break;
        case 4:return "forty-";  break;
        case 5:return "fifty-"; break;
        case 6:return "sixty-"; break;
        case 7:return "seventy-"; break;
        case 8:return "eighty-";  break;
        case 9:return "ninety-";break;

    }
}

string convert1to999(uint64_t a,int i)
{
    if(a!=0)
    {
        if (a>0&&a<20)
            return conv0to19(a)+name[i];

        if(a>20&&a<100&&a%10!=0)
            return conv_dec(a/10)+conv0to19(a%10)+name[i];

        if(a>=20&&a&&a<100&&a%10==0)
            return conv_dec(a/10)+name[i];

        if(a>=100&&a<1000)
            return conv0to19(a/100)+"hundred "+conv_dec(fmod((a/10),10))+conv0to19(a%10)+name[i];
    }
    else return "";
}


void fillContainer(uint64_t a)
{
    for(int i=0;i<=6;i++)
    {
        container[i]=a%1000;
        a/=1000;
    }
}

string convert(uint64_t a)
{
    if(a!=0)
    {
        string output;
        fillContainer(a);

        for(int i=6;i>=0;i--)
            if(container[i]!=0)
                output=output+convert1to999(container[i],i)+" ";

        while(output[output.size()-1]==' ')         ///deletes the
        output.resize(output.size()-1);            ///white spaces on the end

        return output;
    }
    else
        return "zero";
}

int main()
{
    uint64_t a;
    cin>>a;
    cout<<convert(a);
}
