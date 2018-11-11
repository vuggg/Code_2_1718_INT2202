#include <iostream>
#include <vector>

int main()
{

    std::vector<int> store;

    int n;
    std::cin >> n;
    int max = 0;
    for(int i=0;i<n;i++)
    {
        int temp = 0;
        std::cin >> temp;
        if(max<temp) max = temp;
        store.push_back(temp);
    }
    max = max +1;
    int fren[ max +1 ] {0};

    for(int i=0;i< store.size() ; i++)
    {
        fren[ store.at(i) ]++;
    }

    for(int i=0;i<max;i++)
    {
        if(fren[i])
        {
            std::cout << fren[i] << std::endl;
        }
    }

}
