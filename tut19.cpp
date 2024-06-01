// Function Overloading with Examples in C++
// overloading --> use something for multiple works

#include<iostream>
using namespace std;

int sum ( int a , int b )
{
    return (a+b);
}

int sum ( int a , int b , int c )
{
    return (a+b+c);
}

// Calculate the voloume of a cylinder 
int voloume ( double r , int h )
{
    return (3.14*r*r*h);
}

// Calculate the voloume of a cube 
int voloume (int a )
{
    return (a*a*a);
}

// rectangular box
int voloume ( int l , int b , int w)
{
    return (l*b*w);
}

int main () {

    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 3, 7 and 6 is  "<<sum(3,7,6)<<endl;
    cout<<"The voloume of cylinder is "<<voloume(3,7)<<endl;
    cout<<"The voloume of cube is "<<voloume(3)<<endl;
    cout<<"The voloume of rectangular is "<<voloume(3,6,7)<<endl;
    
    return 0;
}