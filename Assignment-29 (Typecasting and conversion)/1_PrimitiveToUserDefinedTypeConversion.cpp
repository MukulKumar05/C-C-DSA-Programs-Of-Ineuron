/*
1.Write a C++ program to convert Primitive type to Complex type.
Example -
int main()
{
Complex c1;
Int x=5;
c1=x;
return 0;
}

(done)
*/

#include<iostream>
using namespace std;

class Complex
{
    private:
        int real, imaginary;
    public:
        Complex()
        {
            real = 0;
            imaginary = 0;
        }
        Complex(int r, int i)
        {
            real = r;
            imaginary = i;
        }
        Complex(int num) // Parameterized constructor to convert int to Complex
        {
            real = num;
            imaginary = 0;
        }
        void setData(int real, int imaginary)
        {
            this->real = real;
            this->imaginary = imaginary;
        }
        void displayComplexNumber()
        {
            if(imaginary < 0)
                cout<<real<<imaginary<<"i"<<endl;
            else
                cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
        void operator=(int num) // Explicitly overloading assignment operator to convert int to Complex
        {
            real = num;
            imaginary = 0;
        }
};

int main()
{
    Complex cp, c3, c1;
    int x = 5;
    c1 = x;
    c1.displayComplexNumber();

    cp.setData(11, 4);
    cp.displayComplexNumber();

    cp = 39;
    cp.displayComplexNumber();

    Complex c2 = 13;
    c2.displayComplexNumber();

    c3 = 26;
    c3.displayComplexNumber();
    return 0;
}
