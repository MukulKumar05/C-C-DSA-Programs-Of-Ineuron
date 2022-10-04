/* 8. Define a class Rectangle and define an instance member function to find the area of
the rectangle. */

#include<iostream>
using namespace std;

class Rectangle
{
    public:
        double findArea(double length, double breadth)
        {
            return length * breadth;
        }
};

int main()
{
    Rectangle r;
    double length = 3, breadth = 5;
    cout<<"Area of rectangle having length "<<length<<" and breadth "<<breadth<<" is "<<r.findArea(length, breadth)<<endl;
    return 0;
}