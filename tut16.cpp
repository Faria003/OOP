// Call by Value & Call by Reference in C++ 

#include<iostream>
using namespace std;

int sum ( int a , int b)
{
    int c = a + b ;
    return c ;
}

 // this will not swap 
 void swap ( int a , int b)
{
    int temp = a ;
    a = b;
    b = temp;
}

// Call by reference using pointers
void swappointer( int *a , int *b)
{
  int temp = *a;
  *a = *b ;
  *b = temp ;
}

// Call by reference using C++ reference variables 
void swapReferenceVar( int &a , int &b)
{
  int temp = a;
  a = b ;
  b = temp ;
}

int main () {
    int x = 4 , y = 5;
    //   cout<<"The sum of 4 and 5 is :"<<sum(a,b)<<endl;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x,y); // this will not swap a and b 
    // swappointer(&x , &y) // this will swap a and b using pointer reference
    //swapReferenceVar(x , y); // this will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}