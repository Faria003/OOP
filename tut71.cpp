// Vector In C++ STL
#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        cout<< v.at(i)<<" ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1; // Zero-length integer vector
    vector<char> vec2(4) ; // 4 element character vector
    vector<char> vec3(vec2);
    vector<int> v( 6, 3);
    int element, size;

    // cout << "Enter the size of your vector : ";
    // cin >> size;
    // cout << "Enter element to this vector : ";
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // vec1.pop_back();
    // display(vec1);
    //  vector<int> :: iterator iter = vec1.begin();
    // // vec1.insert(iter , 566 );
    // display(vec1);

    return 0;
}