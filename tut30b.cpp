#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void displayPoint()
    {
        cout<<"The point is ( "<<x<<", "<<y<<")"<<endl;
    }
};
int main()
{
    Point p ( 1, 1 );
    p.displayPoint();
    Point q ( 4, 6 );
    q.displayPoint();

    return 0;
}

/* 

***create a function which takes two point objects and computes the distance between those two points

#include <iostream>
#include <cmath>
using namespace std;

class Point {
    int x, y;

    // Declare the friend function to access private members of the class
    friend void distance(Point o1, Point o2);

public:
    // Constructor to initialize point coordinates
    Point(int a, int b) {
        x = a;
        y = b;
    }

    // Method to display point coordinates
    void display() {
        cout << "(" << x << "," << y << ")" << endl;
    }
};

// Friend function to calculate and display the distance between two points
void distance(Point o1, Point o2) {
    float dist;
    dist = sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
    cout << "Distance: " << dist << endl;
}

int main() {
    // Create point objects with given coordinates
    Point p(1, 1);
    p.display();

    Point q(2, 2);
    q.display();

    // Calculate and display the distance between points p and q
    distance(p, q);

    return 0;
}
*/