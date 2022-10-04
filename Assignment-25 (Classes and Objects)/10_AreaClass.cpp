/* 10. Define a class Area and define instance member functions to find the area of the
different shapes like square, rectangle , circle etc. */

#include<iostream>
using namespace std;

class Area
{
    public:
        double squareArea(float side)
        {
            return side * side;
        }
        double rectangleArea(float length, float breadth)
        {
            return length * breadth;
        }
        double circleArea(float radius)
        {
            return 3.14 * radius * radius;
        }
};

int main()
{
    Area a;
    float radius = 3.5, length = 3, breadth = 5, side = 4;
    cout<<"Area of square having side "<<side<<" is "<<a.squareArea(side)<<endl;
    cout<<"Area of rectangle having length "<<length<<" and breadth "<<breadth<<" is "<<a.rectangleArea(length, breadth)<<endl;
    cout<<"Area of circle having radius "<<radius<<" is "<<a.circleArea(radius)<<endl;
    return 0;
}
