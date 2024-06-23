// Code Example: Constructors in Derived Class in Cpp

#include <iostream>
using namespace std;

/*
Case1:
classs B : public A
{
//Order of execution of constructor -> firstA() then B()
};

Case2:
class A : public B , public c
{
// Order of execution of constructor -> B() then C() and A()
} ;

Case3:
class A : public B , virtual public C
{
// Order of execution of constructor -> C() then B() and A()
};
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called " << endl;
    }

    void printDataBase1()
    {
        cout << "The value of data is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called " << endl;
    }

    void printDataBase2()
    {
        cout << "The value of data is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(b), Base2(a)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called " << endl;
    }

    void printDataDerived()
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    Derived faria (1,2,3,4);
    faria.printDataBase1();
    faria.printDataBase2();
    faria.printDataDerived();

    return 0;
}