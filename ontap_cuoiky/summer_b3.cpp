#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Student
{
public:
    string ten;
    string lop;
    float diem;
    Student()
    {
        diem = 0.0;
    }
    void print()
    {
        cout << "ten: " << ten << endl;
        cout << "lop: " << lop << endl;
        cout << "diem: " << diem << endl;
        cout << "--------" << endl;
    }
    void input()
    {
        getline(cin, ten);

        getline(cin,lop);

        cin >> diem;
        cin.ignore();
    }
};

void sortArr(Student student[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            if(student[j].diem > student[j-1].diem)
            {
                Student temp = student[j-1];
                student[j-1] =  student[j];
                student[j] = temp;
            }
        }
    }
}


int main()
{
    string temp;
    int n;
    cin >> n;

    cin.ignore();
    Student student[n];

    for(int i=0;i<n;i++)
    {
        student[i].input();
    }

    sortArr(student,n);
    for(int i=0;i<n;i++)
    {
        if(student[i].lop == "a")
        {
            student[i].print();
        }
    }
}
