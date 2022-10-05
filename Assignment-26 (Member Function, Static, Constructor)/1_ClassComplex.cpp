/* 1. Define a class Complex to represent a complex number with instance variables a and
b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex) */

#include<iostream>
using namespace std;

class Complex
{
    private:
        int a, b;
    public:
        void setData(int x, int y)
        {
            a = x;
            b = y;
        }
        void showData()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
        Complex add(Complex C)
        {
            Complex temp;
            temp.a = a + C.a;
            temp.b = b + C.b;
            return temp;
        }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(11, 9);
    c3 = c1.add(c2);
    c1.showData();
    c2.showData();
    c3.showData();
    return 0;
}
