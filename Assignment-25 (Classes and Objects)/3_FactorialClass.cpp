/* 3. Define a class Factorial and define an instance member function to find the Factorial
of a number using class. */

#include<iostream>
using namespace std;

class Factorial
{
    public:
        int findFactorial(int num)
        {
            int fact = 1;
            if(num < 0)
                return -1;
            else if(num == 0)
                return 1;
            else
            {
                for(int i = 1; i <= num; i++)
                    fact = fact * i;
                return fact;
            }
        }
};

int main()
{
    Factorial f1;
    int number = 3;
    cout<<"Factorial of "<<number<<" is "<<f1.findFactorial(number)<<endl;
    return 0;
}