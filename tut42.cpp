// Exercise on C++ Inheritance

#include <iostream>
#include <cmath>
using namespace std;

/*
Create 2 classes :
1. SimpleCalculator - Takes input of 2 numbers using utility
functions and performs + , - , * , / and displays the results
using another function .
2. ScientificCalculator - Takes input of 2 numbers using utility
functions and performs any four scientific operation of your choice

Create another class HybridCalculator and inherit it using these 2 classes:
Q1. What type of inheritance are you using ?
Q2. Which mode of inheritance are you using ?
Q3. Create an object of HybridCalculator and display results of simple and
scientific calculator.
Q4. How is code reuseability implemented ?

*/

class simpleCalculator
{
protected:
    double num1, num2;

public:
    void getSimpleInput()
    {
        cout << " Enter two numbers for simple calculations :" << endl;
        cin >> num1 >> num2;
    }

    void performSimpleOperations()
    {
        cout << " Addition : " << (num1 + num2) << endl;
        cout << " Subtraction : " << (num1 - num2) << endl;
        cout << " Multiplication : " << (num1 * num2) << endl;
        cout << " Division : " << (num1 / num2) << endl;
    }
};

class scientificCalculator
{
protected:
    double num1, num2;

public:
    void getScientificInput()
    {
        cout << " Enter two numbers for Scientific Calculations : " << endl;
        cin >> num1 >> num2;
    }

    void performScientificOperations()
    {
        cout << " Power : " << pow(num1, num2) << endl;
        cout << " Square root of first number : " << sqrt(num1) << endl;
        cout << " Squre root of second number : " << sqrt(num2) << endl;
        cout << " Logarithm of the first number : " << log(num1) << endl;
        cout << " Logarithm of the second number : " << log(num2) << endl;
    }
};

class HybridCalculator : public simpleCalculator, public scientificCalculator
{
public:
    void displayResults()
    {
        getSimpleInput();
        performSimpleOperations();
        getScientificInput();
        performScientificOperations();
    }
};

int main()
{
    HybridCalculator calc;
    calc.displayResults();
    return 0;
}