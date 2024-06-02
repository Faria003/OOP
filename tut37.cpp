//nheritance Syntax & Visibility Mode 
#include <iostream>
using namespace std;

// Base class
class Employee
{

public:
    int id;
    float salary = 34.0;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class syntax
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
1. Default visibility mode is privatef
2. Public visibility mode : public memebers of the base class becomes Public members of the derived class
3. Private visibility mode : public memebers of the base class becomes private members of the derived class
4. Private members are never inherited
*/

// Creating

class Programmer : public Employee
{
    public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee faria(1), neha(2);
    cout << faria.salary << endl;
    cout << neha.salary << endl;

    Programmer skillF(10);
    cout << skillF.languageCode << endl;
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}