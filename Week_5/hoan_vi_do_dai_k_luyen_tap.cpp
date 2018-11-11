#include <iostream>

using namespace std;

char s[] = "abcdefghijklmnopqrstuvwxyz";
// vidu k = 3: char s[] = "aaabbbccc..."

void convertString(int k, char newString[])
{
    int newLen = 26*k;
    //char *newString = new char[newLen];
    int idx = 0;
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<k;j++)
        {
            idx = i*k+j;
            newString[idx] = s[i];
        }
    }
}
void show(char res[], int k)
{
    for(int i=0;i<k;i++)
    {
        cout << res[i];
    }
    cout << endl;
}
void gen(char newString[], char res[], bool mark[], int n, int k, int cur)
{
    if(cur==k) show(res,k);
    for(int i=0;i<n;i++)
    {
        if(mark[i]==false)
        {
            res[cur] = newString[i];
            mark[i] = true;
            gen(newString,res,mark,n,k,cur+1);
            mark[i] = false;
        }

    }
}
int main()
{
    int m,n,k;
    cin >> m >> n >> k;
    int newN = n*k;
    int newLen = 26*k;
    char res[m];
    bool newMark[newLen] = {0};
    char newString[newLen];
    convertString(k,newString);
    gen(newString, res,newMark,newN,m,0);
    return 0;
}
