// Map In C++ STL
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> marksmap;
    marksmap["Harry"] = 98;
    marksmap["Jack"] = 79;
    marksmap["Rohan"] = 80;
    
    map<string , int > :: iterator iter ;
    for (iter = marksmap.begin();iter != marksmap.end();iter++)
    {
        cout<<(*iter).first << " "<<(*iter).second<<"\n";
    }

    return 0;
}