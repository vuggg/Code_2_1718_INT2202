#include <iostream>
#include <string>

class Person
{
private:
    std::string firstname;
    std::string lastname;
    std::string fullname;
    int age;
public:
    Person(std::string lastname, std::string firstname);
    void setAge(int age = 0);
    std::string getFullName();
    int getAge();
};

Person::Person(std::string lastname, std::string firstname)
{
    this->lastname = lastname;
    this->firstname = firstname;
    this->fullname = this->lastname + this->firstname;
}

int Person::getAge()
{
    return this->age;
}
std::string Person::getFullName()
{
    return this->fullname;
}
void Person::setAge(int age)
{
    this->age = age;
}

using namespace std;

int main()
{
    string lastname, firstname;
    int age;
    cin >> lastname >> firstname >>age;
    Person person(lastname,firstname);
    person.setAge(age);
    cout << person.getFullName() << " " << person.getAge() << endl;
    return 0;
}
