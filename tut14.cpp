// Structures, Unions & Enums

#include<iostream>
using namespace std;

typedef struct employee
{
   int eId ;
   char favchar;
   float salary ;

} ep ;

//we can use 1 type at a time --> memory is shared
union money
{
    int rice ;
    int car ;
    float pounds;
};

int main () {

    enum Meal { breakfast , lunch , dinner };

    Meal m5 = lunch;
    cout<<(m5==1)<<endl;

    // cout<<breakfast<<endl ;
    // cout<<lunch <<endl;
    // cout<<dinner <<endl;

    // union money m1 ;
    // m1.rice = 34 ;
    // cout<<" The value is "<<m1.rice<<endl;
    
    // ep faria ;
    // faria.eId = 528;
    // faria.favchar = 'J';
    // faria.salary = 0000000 ;

    // cout<<" Employee id : "<<faria.eId<<endl;
    // cout<<" Employee favchar : "<<faria.favchar<<endl;
    // cout<<" Employee salary : "<<faria.salary<<endl;

    return 0;
}