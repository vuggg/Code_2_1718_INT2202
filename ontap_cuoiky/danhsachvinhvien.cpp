#include <string>
#include <iostream>
#include <vector>


using namespace std;

struct Type
{
    Type(int tt, int id_, string name_)
    {
        thaotac = tt;
        id = id_;
        name = name_;
    }
    Type()
    {
        thaotac = 0;
        id = 0;
        name = nullptr;
    }
    int thaotac;
    int id;
    string name = nullptr;
};

int main()
{
    vector<Type> store;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin >> temp;
        if(temp == 1)
        {
            int tempID;
            string tempString;
            cin >> tempID;
            getline(cin,tempString);
            Type tempStruct(temp,tempID,tempString);
            store.push_back(tempStruct);
        }
        else
        {
            int tempID;
            cin >> tempID;
            Type tempStruct(temp,tempID,nullptr);
            store.push_back(tempStruct);
        }
    }


}
