/* 9. Define a class Circle and define an instance member function to find the area of the
circle. */

#include<iostream>
using namespace std;

class Circle
{
    public:
        double findArea(float radius)
        {
            return 3.14 * radius * radius;
        }
};

int main()
{
    Circle c;
    float radius = 3.5;
    cout<<"Area of circle having radius "<<radius<<" is "<<c.findArea(radius)<<endl;
    return 0;
}