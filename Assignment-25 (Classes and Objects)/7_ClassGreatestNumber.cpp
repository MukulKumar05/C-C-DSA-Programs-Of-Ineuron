/* 7. Define a class Greatest and define instance member function to find Largest among
3 numbers using classes. */

#include<iostream>
using namespace std;

class LargestNumber
{
    public:
        double findLargestOf3Numbers(double num1, double num2, double num3)
        {
            if(num1 >= num2 && num1 >= num3)
                return num1;
            else if(num2 >= num1 && num2 >= num3)
                return num2;
            else
                return num3;
        }
};

int main()
{
    LargestNumber l1;
    cout<<"Largest number is "<<l1.findLargestOf3Numbers(3.49, 3.71, 3.69);
    return 0;
}