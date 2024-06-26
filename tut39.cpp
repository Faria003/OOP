// Protected access Modifier in C++

#include<iostream>
using namespace std;

class Base{
    protected:
        int a; 
    private:
        int b;

};

class Derived: protected Base{
   
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}



/*
For a protected member: 
                           Public derivation      Private Derivation     Protected Derivation
1. Private members          Not inherited           Not inherited          Not inherited
2. Protected members        Protected               Private                Protected
3. Public members           Public                  Private                Protected

*/

