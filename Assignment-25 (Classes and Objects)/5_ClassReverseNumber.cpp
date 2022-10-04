/* 5. Define a class ReverseNumber and define an instance member function to find
Reverse of a Number using class. */

#include<iostream>
using namespace std;

class ReverseNumber
{
    public:
        int findReverseNumber(int number)
        {
            int reverse_num = 0, digit;
            while(number)
            {
                digit = number % 10;
                reverse_num = reverse_num * 10 + digit;
                number = number / 10;
            }
            return reverse_num;
        }
};

int main()
{
    ReverseNumber r;
    int number = 76593;
    cout<<"Reverse of "<<number<<" is "<<r.findReverseNumber(number)<<endl;
    return 0;
}