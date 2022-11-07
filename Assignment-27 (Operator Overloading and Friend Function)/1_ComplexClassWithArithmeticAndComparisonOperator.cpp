/* 1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==
*/

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
        Complex operator+(Complex C)
        {
            Complex temp;
            temp.real = real + C.real;
            temp.imaginary = imaginary + C.imaginary;
            return temp;
        }
        Complex operator-(Complex C)
        {
            Complex temp;
            temp.real = real - C.real;
            temp.imaginary = imaginary - C.imaginary;
            return temp;
        }
        Complex operator*(Complex C)
        {
            Complex temp;
            temp.real = real * C.real;
            temp.imaginary = imaginary * C.imaginary;
            return temp;
        }
        bool operator==(Complex C)
        {
            if(real == C.real && imaginary == C.imaginary)
                return true;
            else
                return false;
        }
};

int main()
{
    Complex c1, c2, c3;
    c1.setComplexNumber(1, 1);
    c2.setComplexNumber(5, 7);
    c3 = c1 * c2;
    c1.displayComplexNumber();
    c2.displayComplexNumber();
    c3.displayComplexNumber();

    if(c2 == c3)
        cout<<"Complex numbers are equal."<<endl;
    else
        cout<<"Complex numbers are not equal."<<endl;
    return 0;
}
