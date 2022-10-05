/* 7. Define a class Box and write a program to enter length, breadth and height and
initialise objects using constructor also define member functions to calculate volume
of the box. */

#include<iostream>
using namespace std;

class Box
{
    private:
        float length, breadth, height;
    public:
        Box(float l, float b, float h)
        {
            if(l < 0)
                length = -l;
            else
                length = l;
            
            if(b < 0)
                breadth = -b;
            else
                breadth = b;
            
            if(h < 0)
                height = -h;
            else
                height = h;
        }
        double boxVolume()
        {
            return length * breadth * height;
        }
};

int main()
{
    float length, breadth, height;
    cout<<"Enter length, breadth and height of box: ";
    cin>>length>>breadth>>height;
    Box b(length, breadth, height);
    cout<<"Volume of box is "<<b.boxVolume()<<endl;
    return 0;
}