// Header files & Operators

//there are two types of header files:
//1.system header files : it comes with the compiler
#include<iostream>
//2.User defined header files: It is written by the programmer
// include"this.h" // --> this will produce an error if this.h is not present in
//the current directory

using namespace std;

int main () 
{
    int a = 4 , b = 5 ;
    cout<< " Operators in C++"<<endl;
    cout<< " Following are the type of operators in C++" <<endl;
    //Arithmatic Operators
    cout<<" The value of a+b is " << a+b <<endl;
    cout<<" The value of a-b is " << a-b <<endl;
    cout<<" The value of a*b is " << a*b <<endl;
    cout<<" The value of a/b is " << a/b <<endl;
    cout<<" The value of a%b is " << a%b <<endl;
    cout<<" The value of a++ is " << a++ <<endl;
    cout<<" The value of a-- is " << a-- <<endl;
    cout<<" The value of ++a is " << ++a <<endl;
    cout<<" The value of --a is " << --a <<endl;
    cout<<endl;

    // Assignment Operators --> used to assign values to variables
    // a = 4 , b = 9 ;
    // char d = 'd' ;

    //Comperions Operators
    cout << " Following are the types of Operators in C++"<<endl;
    cout << " The comparison of a==b is " <<(a==b)<< endl;
    cout << " The comparison of a!=b is " <<(a!=b)<< endl;
    cout << " The comparison of a>=b is " <<(a>=b)<< endl;
    cout << " The comparison of a<=b is " <<(a<=b)<< endl;
    cout << " The comparison of a>b is " <<(a>b)<< endl;
    cout << " The comparison of a<b is " <<(a<b)<< endl;
    cout <<endl;

    // Logical Operators
    cout << "Following are the logical operators in C++" << endl;
    cout << "The value of this logical and  operator ((a==b) && (a<b)) is : " 
    <<((a==b) && (a<b))<<endl;
    cout << "The value of this logical or operators ((a==b) || (a<b)) is : " 
    <<((a==b) || (a<b))<<endl;
    cout << " The value of this logical not operator (!(a==b)) is : "
    <<(!(a==b)) <<endl;
    return 0;
}