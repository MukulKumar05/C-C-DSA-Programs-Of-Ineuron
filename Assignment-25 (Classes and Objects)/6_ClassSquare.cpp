/* 6. Define a class Square to find the square of a number and write a C++ program to
Count number of times a function is called. */

#include<iostream>
using namespace std;

class Square
{
    private:
        static int functionCount;
    public:
        static double findSquare(double number)
        {
            functionCount ++;
            return number * number;
        }
        static int executionCount()
        {
            return functionCount;
        }
};

int Square::functionCount;

int main()
{
    cout<<"Square of 3 is "<<Square::findSquare(3)<<endl;
    cout<<"Square of 9 is "<<Square::findSquare(9)<<endl;
    cout<<"Square of 5 is "<<Square::findSquare(5)<<endl;
    cout<<"Execution count is "<<Square::executionCount()<<endl;
    return 0;
}