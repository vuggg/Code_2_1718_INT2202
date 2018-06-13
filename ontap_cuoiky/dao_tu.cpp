#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool check(string &s, int idx)
{
    if( (idx+1)<s.size() )
    {
        if(s.at(idx) != ' ') return true;
    }
    return false;
}
void stringToVector(string &s, vector<string> &listWord, int &vectorSize)
{
    /// gan dai hoc
    for(int i=0;i< s.size();i++)
    {
        int idx = i;
        while( check(s,idx) ) idx++;
        if(idx == s.size() -1) idx++;
        listWord.at(vectorSize) = s.substr(i,idx-i);
        //cout << listWord.at(vectorSize) << endl;
        i = idx;
        vectorSize++;
    }
}

int main()
{
    vector<string> listWord(100);
    string s;
    int vectorSize = 0;
    getline(cin,s);
    stringToVector(s,listWord,vectorSize);
    for(int i = vectorSize-1;i>=0;i--)
    {
        cout << listWord.at(i) << " ";
    }
}
