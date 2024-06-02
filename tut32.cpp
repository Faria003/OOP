//Constructors With Default Arguments

#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void Simple ::printData()
{
    cout << " The value of data is " << data1 << "," << data2 << " and " << data3 << endl;
};
int main()
{
    Simple s1(1, 4, 3);
    s1.printData();

    return 0;
}

/*

****Homework : Write a program to demonstrate the use of Constructor with default argument having class named Complex.

#include<iostream>

using namespace std;

class Complex {
    int a, b;
public:
    // A parameterized constructor with default arguments.
    Complex(int x = 0, int y = 0) {
        a = x;
        b = y;
        cout << "An object of class Complex is created and a constructor is invoked." << endl;
    }
    
    void printData(void) {
        cout << "The complex number: " << a << " + " << b << "i" << endl << endl;
    }
};

int main() {
    // Creating an object with no arguments, using default values 0, 0.
    Complex c1;
    c1.printData();

    // Creating an object with one argument, using default value 0 for the second parameter.
    Complex c2(12);
    c2.printData();

    // Creating an object with two arguments.
    Complex c3(31, 87);
    c3.printData();

    return 0;
}

*/