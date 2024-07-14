// C++ Templates: Class Templates with Default Parameters

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Faria
{
public:
    T1 a;
    T2 b;
    T3 c;
    Faria(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main()
{

    Faria<> f(4, 6.4,'C');
    f.display();

    cout<<endl;

    Faria<float , char , char > g(1.6,'O','C');
    g.display();


    return 0;
}