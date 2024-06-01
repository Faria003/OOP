// C++ Objects Memory Allocation & using Arrays in Classes

#include<iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
    void initCounter()
    {
        counter=0;
    }
    void setprice();
    void displayprice();
};

void shop :: setprice()
{
   cout<<"Enter ID of your item no "<<counter+1<<endl;
   cin>>itemId[counter];
   cout<<"Enter Price of your item "<<endl;
   cin>>itemPrice[counter];
   counter++;
}

void shop :: displayprice()
{
    for( int i = 0 ; i<counter;i++)
    {
        cout<<"The price of item with ID"<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}
int main () {

    shop item ;
    item.initCounter();
    item.setprice();
    item.setprice();
    item.setprice();
    item.displayprice();
    
    return 0;
}