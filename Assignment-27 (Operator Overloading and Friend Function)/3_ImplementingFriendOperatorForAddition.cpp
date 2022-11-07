/* 3. Write a C++ program to add two complex numbers using operator overloaded by a
friend function. (done)*/

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real, imaginary;
    public:
        void setComplexNumber(int r, int i)
        {
            real = r;
            imaginary = i;
        }
        void displayComplexNumber()
        {
            if(imaginary >= 0)
                cout<<real<<"+"<<imaginary<<"i"<<endl;
            else
                cout<<real<<""<<imaginary<<"i"<<endl;
        }
        friend Complex operator+(Complex, Complex);
};
Complex operator+(Complex X, Complex Y)
{
    Complex temp;
    temp.real = X.real + Y.real;
    temp.imaginary = X.imaginary + Y.imaginary;
    return temp;
}

int main()
{
    Complex c1, c2, c3;
    c1.setComplexNumber(1, 3);
    c2.setComplexNumber(5, 7);
    c3 = c1 + c2;
    c1.displayComplexNumber();
    c2.displayComplexNumber();
    c3.displayComplexNumber();

    return 0;
}