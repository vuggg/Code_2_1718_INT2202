#include <iostream>
#include <string>
#include <vector>


using namespace std;

void tovecto(vector<string> &vt,const string &s)
{
    // tao deo biet
    for(int i=0;i<s.size();i++)
    {
        //cout << "i: " << i << endl;
        int j = i;
        while(j<s.size()-1)
        {
            if(s.at(j+1)!= ' ') j++;
            else break;
        }
        string temp = s.substr(i,j-i+1);
        vt.push_back(temp);
        i = j+1;
        //cout << "i end: " << i << endl;
    }
}

int main()
{
    string s;
    getline(cin,s);
    vector<string> vt;
    tovecto(vt,s);

    cout << vt.at( vt.size()-1 ) << " ";
    for(int i=1;i<vt.size()-1;i++)
    {
        cout << vt.at(i) << " ";
    }
    cout << vt.at(0);


    cout <<  endl;

    string num = "+50 0";
    string::size_type sz;

    int nu = stoi(num,&sz);
    cout << nu;

}
