// Break and Continue Statements

#include<iostream>
using namespace std;

int main () {

    // Break in C++
    // for (int i=0 ; i<=4 ; i++)
    // {
    //     cout<<i<<endl;
    //     if(i==2)
    //     {
    //         break;
    //     }
    // }

    //Continue in C++
    for (int i=0 ; i<=6 ; i++)
    {
        if (i==2)
        {
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}