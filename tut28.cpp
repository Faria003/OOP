// More on C++ Friend Functions

#include <iostream>
using namespace std;

class Y ;

class X
{
    int data;

public:
    void setData(int value)
    {
        data = value;
    }

    friend void add(X, Y);
};

class Y
{
    int num;

public:
    void setData(int value)
    {
        num = value;
    }

    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "Summing data of x and Y objects gives me " << o1.data + o2.num << endl;
}

int main()
{ 
    X a1 ;
   a1.setData(3);

   Y b1;
   b1.setData(15);

   add(a1,b1);
    return 0;
}