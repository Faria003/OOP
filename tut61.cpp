// File I/O in C++: Read/Write in the Same Program & Closing Files

#include <iostream>
#include <fstream>
using namespace std;

int main()
{

    // // connecting our file with fout stream
    // ofstream fout("sample61a.txt");

    // // Creating a name string and filling it with the string entered by the user
    // cout << "Enter you name :";
    // string name;
    // cin >> name;
    
    // // writing a string to the file 
    // fout << "My name is " + name;

    // fout.close();

    ifstream fin ("sample61a.txt");
    string content ;
    // fin>>content ;
    getline(fin,content);
    cout<<"The content of this file is : "<<content;

    return 0;
}