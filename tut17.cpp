// Inline Functions , Default Arguments & Constant Arguments in C++

#include<iostream>
using namespace std;

 inline int product ( int a , int b )
{
    // Not recommended to use below line with inline functions
    //static int c = 0 ; // This executes only once 
    /*c = c + 1 ;  Next time this  function is run , the value of c wil be 
    retained*/
    return a*b ;
}

 int moneyRecevied(int currentmoney , float factor=1.04)
{
    return currentmoney * factor ;
}

// int strlen( const char *p)
//{

//}

int main () {
     int a , b ;
     //cout<<" Enter the value of a and b : " <<endl;
     //cin>>a>>b;
     //cout<<" The product of a and b is : "<<product(a,b)<<endl;
     
     int money = 100000;
     cout<<" If you have "<<money<<" Rs in your bank account , you will receive "
     <<moneyRecevied(money)<<" Rs after 1 year"<<endl;
     cout<<"For VIP: if you have "<<money<<" Rs in your bank account , you will receive "
     <<moneyRecevied(money,1.1)<<" Rs after 1 year"<<endl;

    return 0;
}