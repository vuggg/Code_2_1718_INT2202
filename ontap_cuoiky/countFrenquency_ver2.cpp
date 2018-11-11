#include <iostream>
#include <new>
#include <vector>

using namespace std;

void show(vector<int> &s, int n)
{
    int **store = new int*[n];
    for(int i=0;i<n;i++)
    {
        store[i] = new int[2];
    }
    int idx = 0;
    while(s.size()!=0)
    {
        store[idx][0] = s.at(0);
        int temp = s.at(0);
        int count = 0;

        for(int i=0;i<s.size();i++)
        {
            if(s.at(i)==temp)
            {
                count++;
                s.erase(s.begin() + i-1);
                i = i-1;
            }
        }
        store[idx][1] = count;
        //cout << "count: " << store[idx][0] << endl;
        idx++;
    }

    int maxcount = store[0][1];
    for(int i=0;i<idx;i++)
    {
        if(maxcount < store[i][1]) maxcount = store[i][1];
    }
    for(int i=0;i<idx;i++)
    {
        if(maxcount == store[i][1])  cout << store[i][0] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> s;
    for(int i=0;i<n;i++)
    {
        int temp = 0;
        cin >> temp;
        s.push_back(temp);
    }
    show(s,n);
    return 0;
}
