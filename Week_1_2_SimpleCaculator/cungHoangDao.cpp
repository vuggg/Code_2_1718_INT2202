#include <iostream>
using namespace std;
int main()

{
    int month,date;
    cin>>date; 
    cin>>month;
    
    if (( month == 1 && date >= 20) || ( month == 2 && date <=18))
    {
         cout<<"Bao Binh\n";
         
    }
    else if (( month == 2 && date >= 19) || ( month == 3 && date <= 20))
    {
         cout<<"Song Ngu\n";
    }
    else if (( month == 3 && date >= 21) || ( month == 4 && date <= 19))
    {
         cout<<"Bach Duong\n";
    }
    else if (( month == 4 && date >= 20) || ( month == 5 && date <= 20))
    {
         cout<<"Kim Nguu\n";
    }
    else if (( month == 5 && date >= 21 ) || ( month == 6 && date <= 20 ))
    {
         cout<<"Song Tu\n";
    }
    else if (( month == 6 && date >= 22 ) || ( month == 7 && date <= 22 ))
    {
         cout<<"Cu Giai\n";
    }
    else if (( month == 7 && date <= 23 ) || ( month == 8 && date <= 22))
    {
         cout<<"Su Tu\n";
    }
    else if (( month == 8 && date >= 23 ) || ( month == 9 && date <= 22 ))
    {
         cout<<"Xu Nu\n";
    }
    else if (( month == 9 && date >= 23 ) || ( month == 10 && date <= 22))
    {
         cout<<"Thien Binh\n";
    }
    else if (( month == 10 && date >= 24 ) || ( month == 11 && date <= 22))
    {
         cout<<"Thien Yet\n";
    }
    else if (( month == 11 && date >= 23 ) || ( month == 12 && date <= 21))
    {
         cout<<"Nhan Ma\n";
    }
    else
    {
         cout<<"Ma Ket\n";
    }
}
