// File I/O in C++: open() and eof() functions

#include<iostream>
#include<fstream>
using namespace std;

int main () {
    ofstream out ;
    out.open("sample62.txt");
    out<<"This is me";

    out.close();

    ifstream in ;
    string st , st2 ;
    in.open("sample62.txt");
    // in>>st>>st2;
    // cout<<st<<st2;

    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st<<st2;
    }

    in.close();
 
    return 0;
}