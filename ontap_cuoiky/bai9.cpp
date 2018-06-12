#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int n ;
    cin >> n;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    }
    int store[n][2];
    int idx = 0;
    while(arr.size()>0)
    {
        store[idx][0] = arr.at(0);
        int count_ = 0;
        for(int i=1;i<arr.size();i++)
        {
            if(arr.at(i) == store[idx][0])
            {
                count_ = count_+1;
                arr.erase(arr.begin()+ i,arr.begin()+ i+1);
                i = i-1;
            }
        }
        store[idx][1] = count_;
        arr.erase(arr.begin());
        idx++;
    }
    int maxcount = 0;
    for(int i=0;i<idx;i++)
    {
        if(store[i][1]>maxcount) maxcount = store[i][1];
    }
    for(int i=0;i<idx;i++)
    {
        if(store[i][1] == maxcount)
        {
            cout << store[i][0] << " ";
        }
    }
}
