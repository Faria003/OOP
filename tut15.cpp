// Functions & Function Prototypes in C++

#include<iostream>
using namespace std;

// Function Prototype
// type function name(arguments);
int sum( int a , int b );
void g ();

int main () {
    int num1 , num2 ;

    cout<<" Enter the first number : "<<endl;
    cin>>num1;
    cout<<" Enter the second number : "<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<" The sum of both number is :"<<sum(num1,num2)<<endl;

    g();
    return 0;
}

int sum( int a , int b )
{
    /* Formal parameters a and b will be taking values from actual 
    parameters num1 and num2 */
    int c = a+b;
    return c;
}

void g ()
{
  cout<<" Hello , Good Morning " <<endl;
}