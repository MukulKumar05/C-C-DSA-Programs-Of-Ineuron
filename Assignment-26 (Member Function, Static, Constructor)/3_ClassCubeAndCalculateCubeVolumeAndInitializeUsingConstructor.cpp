// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;

class Cube
{
    private:
        float edge;
    public:
        Cube(float length)
        {
            edge = length;
        }
        double CubeVolume()
        {
            return edge * edge * edge;
        }
};

int main()
{
    float edge = 2;
    Cube c(edge);
    cout<<"Volume of cube having edge "<<edge<<" is "<<c.CubeVolume()<<endl;
    return 0;
}