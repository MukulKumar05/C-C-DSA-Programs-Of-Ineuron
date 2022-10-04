/* 1. Define a class Complex to represent a complex number. Declare instance member
variables to store real and imaginary part of a complex number, also define instance
member functions to set values of complex number and print values of complex
number */


#include<iostream>
using namespace std;

class Complex
{
    private:
        int real, imaginary;
    public:
        void setComplexNumber(int x, int y)
        {
            real = x;
            imaginary = y;
        }
        void displayComplexNumber()
        {
            cout<<"Complex Number is "<<real<<" + "<<imaginary<<"i"<<endl;
        }
};

int main()
{
    Complex n1;
    n1.setComplexNumber(3, 4);
    n1.displayComplexNumber();
    return 0;
}
