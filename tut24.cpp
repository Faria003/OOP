// Static Data Members & Methods in C++

#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count; // count as whole // without static it will count separately
public:
    void setData()
    {
        cout << "Enter the id :" << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of this employee is " << id << endl;
        cout << "And this is employee number : " << count << endl;
    }

    static void getCount()
    {
        cout<<"The value of count is : "<<count<<endl;
    }

    static void GetCount()
    {
        cout<<"The value of count is "<<count<<endl;
    }
};

int employee ::count; // Default value is zero...it can be intialize with the value we want
int main()
{
    employee faria, rohan, jennie;
    // Count is the static data members of class employee
    // faria.id=1 ;
    // faria.count=1;  cannot do this as id and count is private

    faria.setData();
    faria.getData();
    // employee:: GetCount();

    rohan.setData();
    rohan.getData();
    // employee:: GetCount();

    jennie.setData();
    jennie.getData();
    // employee:: GetCount();

    return 0;
}