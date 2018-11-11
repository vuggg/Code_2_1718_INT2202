#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countWord(string &s, vector<string> &listString)
{
    // nguyen van a
    int count = 0;
    int start = -1;
    for(int i=0;i<s.size();i++)
    {
        if( i==0 && s.at(i)!= ' ')
        {
            start = i;
        }
        if(i!=0 && s.at(i-1)==' ' && s.at(i) != ' ')
        {
            start = i;
        }
        if( start!= -1 && i == s.size() - 1)
        {
            listString.push_back( s.substr(start,i-start+1) );
            break;
        }
        if(start!= -1 && s.at(i+1)==' ')
        {
            listString.push_back( s.substr(start,i-start+1) );
            start = -1;
        }
    }
    return listString.size();
}



void differentListString(const vector<string> &listWord, vector<string> &differentString)
{
    for(int i=0;i<listWord.size();i++)
    {
        if(i==0) differentString.push_back(listWord[0]);
        bool found = false;
        for(int j=0;j<differentString.size();j++)
        {
            if( listWord[i] == differentString[j])
            {
                found = true;
                break;
            }
        }
        if(!found) differentString.push_back(listWord[i]);
    }
    return;
}

void frenquencyWord(const vector<string> &listWord, const vector<string> &differentString,
                    vector<int> &frenquency)
{
    cout << "... " << endl;
    for(int i=0;i<differentString.size();i++)
    {
        frenquency.push_back(0);
    }

    for(int i=0;i<differentString.size();i++)
    {
        for(int j=0;j<listWord.size();j++)
        {
            if( differentString[i].compare( listWord[j] ) == 0)
            {
                frenquency[i]+=1;
            }
        }
    }
    return;
}

int main()
{
    string s;
    getline(cin, s);
    vector<string> listString;
    vector<string> differentString;
    vector<int> frenquency;

    int length = countWord(s,listString);
    differentListString(listString,differentString);

    frenquencyWord(listString, differentString,frenquency );

    for(int i=0;i<differentString.size();i++)
    {
        cout << differentString[i] << " " << frenquency[i] << endl;
    }

}
