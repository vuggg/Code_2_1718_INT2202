#include <iostream>
#include <string>
#include <vector>

using namespace std;

void tachHoTen(const string fullname, string &ho, string &tendem,
               string &ten)
{
    // nguyen van anh
    int space1 = 0;
    int space2 = 0;
    for(int i=0;i<fullname.size();i++)
    {
        if(fullname.at(i) == ' ')
        {
            space1 = i;
            break;
        }
    }
    for(int i = fullname.size()-1;i>-1;i--)
    {
        if(fullname.at(i)== ' ')
        {
            space2 = i;
            break;
        }
    }
    cout <<  "space: "  << space1 <<" " << space2 << endl;

    ho  = fullname.substr(0,space1);
    tendem = fullname.substr(space1+1,space2-space1-1);
    ten = fullname.substr(space2+1,fullname.size()-space2-1);
}

int main()
{
    string fullname = "nguyen thi thu";
    string ho,tendem,ten;

    tachHoTen(fullname,ho,tendem,ten);

    cout <<ho  <<" " <<tendem <<" " << ten <<endl;
}
