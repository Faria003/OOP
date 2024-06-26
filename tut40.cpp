// Multilevel Inheritance Deep Dive with Code Example

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int r)
{
    roll_number = r;
}

void Student ::get_roll_number() // writing elements outside the functions
{
    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student // Inherited from class
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};

void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_marks()
{
    cout << " The marks obtain in Maths is " << maths << endl;
    cout << " The marks obtain in Physics is " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << " Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{

    /*
        If we are inheriting B from A and C from B : [ A--->B--->C ]
        1. A is the base calss for B and B is the base class for C
        2. A-->B-->C  is called inheritance path
    */
    Result faria;
    faria.set_roll_number(528);
    faria.set_marks(90, 98);
    faria.display();

    return 0;
}