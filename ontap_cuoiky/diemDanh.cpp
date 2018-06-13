#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isBan(string s)
{
    int vang = 0;
    int muon = 0;
    for(int i=0;i< s.size(); i++)
    {
        int idx = i;
        if(s.at(i) == 'A') vang++;
        while(s.at(idx)=='L')
        {
            if(idx<s.size()-1) idx++;
            else break;
        }
        if(idx-i>2) return true;
    }

    if(vang>1) return true;
    return false;
}
int main()
{
    vector<string> diemdanh(100);
    int n;
    cin >> n;
    int sizeVector = 0;
    for(int i=0;i<n;i++)
    {
        cin >> diemdanh.at(i);
        sizeVector++;
    }
    for(int i=0;i<sizeVector;i++)
    {
        if( isBan(diemdanh.at(i)) ) cout <<"no" << endl;
        else cout << "yes" << endl;
    }

}
