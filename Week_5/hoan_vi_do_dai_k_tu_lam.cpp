#include <iostream>

using namespace std;

void show(char res[], int k)
{
    for(int i=0;i<k;i++)
    {
        cout << res[i];
    }
    cout << endl;
    return;
}
void gen(char res[], bool mark[], int n, int k, int cur)
{
    if(cur==k) show(res,k);
    for(int i=0;i<n;i++)
    {
        if(mark[i]==false)
        {
            res[cur] = i + 'a';
            mark[i] = true;
            gen(res,mark,n,k,cur+1);
            mark[i] = false;
        }

    }
}
int main()
{
    int n,k;
    cin >> n >> k;
    bool mark[26] = {0};
    char res[k];
    gen(res, mark, n,k,0);
}
