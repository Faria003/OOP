// Member Function Templates & Overloading Template Functions in C++

#include <iostream>
using namespace std;

template <class T>
class Faria
{
public:
    T data;
    Faria(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Faria<T>::display()
{
    cout << data << endl;
}

void func(int a)
{
    cout << "I am first func() " << a << endl;
}

template <class T>
void func1(T a)
{
    cout << " I am First template func()" << a << endl;
}
int main()
{
    // Faria<int> f(5);
    // cout << f.data << endl;
    // f.display();

    func(4); // Exact match takes the highest priority
    func1(5);
    return 0;
}