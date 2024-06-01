#include<iostream>
using namespace std;

    int c =45;
int main ()
{
    //********* Built in data types **********
    // int a , b , c ;
    // cout<<" Enter the value of a: "<<endl;
    // cin>>a;
    // cout<<" Enter the value of b:"<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<" The sum is : "<<c<<endl;
    // cout<<" The global c is : "<<::c<<endl;
    // cout<<endl;

    // float d = 34.4 ;
    // long double e = 34.4 ;

    // cout<<" The value of d is "<<d<<endl;
    // cout<<" The value of e is "<<e<<endl;
    // cout<<endl;

    //********* Float , double , long double  **********
    // cout<<" The size of 34.4 is " <<sizeof(34.4)<<endl;
    // cout<<" The size of 34.4f is " <<sizeof(34.4f)<<endl;
    // cout<<" The size of 34.4F is " <<sizeof(34.4F)<<endl;
    // cout<<" The size of 34.4l is " <<sizeof(34.4l)<<endl;
    // cout<<" The size of 34.4L is " <<sizeof(34.4L)<<endl;
    
    //********* Reference Variables **********
    // faria sultana--> faria --> neha

    // float x=445;
    // float &y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //********* Reference Variables **********
    // conversion of data types

    int a = 45;
    float b = 45.46;

    cout<<" The value of a is "<<(float)a<<endl;
    cout<<" The value of a is "<<(float)a<<endl;

    cout<<" The value of b is "<<(int)b<<endl;
    cout<<" The value of b is "<<(int)b<<endl;
    int c = (int) b ;

    cout<<" The expression is "<< a + b <<endl;
    cout<<" The expression is "<< a+(int)b;
    cout<<" The expression is "<<a + (int)b;


    return 0;
}