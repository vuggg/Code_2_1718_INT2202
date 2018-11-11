#include <iostream>

using namespace std;



int main()
{
    int n;
    cin >> n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    int count = 0;

    // 1 2 3 5 2 4 5 6 9 2
    int sumall = 0;
    for(int i=0;i<n;i++)
    {
        int sum = 0;
        sum = ar[i];
        bool check = false;
        for(int j=i;j<n-1;j++)
        {
            if(ar[j] < ar[j+1])
            {
                cout << "sum " << sum << endl;
                check = true;
                sum = sum + ar[j+1];
                continue;
            }
            else
            {
                cout << "j: "<<j << endl;
                i=j;
                break;
            }

        }
        if(check)
        {
             count = count +1;
             cout << "sum: " <<sum <<endl;
             sumall = sumall + sum;
        }


    }
    cout << " count: " << count << endl;
    cout << sumall/ (count);
}

