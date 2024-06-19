// Multiple Inheritance Deep Dive with Code Example in C++

#include <iostream>
using namespace std;

/* Syntax for inheriting in multiple inheritance
class DerivedC : visibility-mode base 1 , visiblity-mode base2
{
Class boby of class "DerivedC"
};
*/

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int b)
    {
        base2int = b;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int c)
    {
        base3int = c;
    }
};

class Derived : public Base1, public Base2 , public Base3
{
public:
    void show()
    {
        cout << "the value of Base1 is " << base1int << endl;
        cout << "the value of Base2 is " << base2int << endl;
        cout << "the value of Base3 is " << base3int << endl;
        cout << "the sum of Base1 , Base2 & Base3 is " << (base1int + base2int + base3int) << endl;
    }
};

/*
This inherited derived class will look something  like this :

Data members:
  base1int --> protected
  base2int --> protected

Member functions :
  set_base1int --> public
  set_base2int --> public
  set_show     --> pulbic
*/

int main()
{
    Derived faria;
    faria.set_base1int(23);
    faria.set_base2int(23);
    faria.set_base3int(23);
    faria.show();

    return 0;
}