// copy Constructor
#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    // when no copy constructor is found , compiler supplies its own copy constructor
    Number(Number  &obj)
    {
        cout<<" Copy Constructor called"<<endl;
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45),z2 ;
    x.display();
    y.display();
    z.display();

    Number z1(z); // copy constructor invoked 
    z1.display();
    // z1 should exactly resemble z or x or y 

    z2 = z ; // copy constructor not called

    Number z3 = z ; // copy constructor invoked
   
    return 0;
}