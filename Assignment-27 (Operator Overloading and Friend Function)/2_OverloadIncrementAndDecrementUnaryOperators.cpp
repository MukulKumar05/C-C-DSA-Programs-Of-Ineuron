// 2. Write a C++ program to overload unary operators that is increment and decrement. (completed)

#include<iostream>
using namespace std;

class Number
{
    private:
        int num;
    public:
        Number(int value)
        {
            num = value;
        }
        void setValue(int value)
        {
            num = value;
        }
        int getValue()
        {
            return num;
        }
        int operator++() // pre-increment
        {
            return ++num;
        }
        int operator++(int useless) // post-increment
        {
            return num++;
        }
        int operator--() // pre-decrement
        {
            return --num;
        }
        int operator--(int useless) // post-decrement
        {
            return num--;
        }
};

int main()
{
    Number n1(3), n2(0);
    cout<<"Value of n1 is "<<n1.getValue()<<endl;
    cout<<"Value of n2 is "<<n2.getValue()<<endl;

    ++n1;
    cout<<"Value of n1 is "<<n1.getValue()<<endl;
    
    n2.setValue(++n1);
    
    cout<<"Value of n1 is "<<n1.getValue()<<endl;
    cout<<"Value of n2 is "<<n2.getValue()<<endl;

    --n1;
    --n2;
    cout<<"Value of n1 is "<<n1.getValue()<<endl;
    cout<<"Value of n2 is "<<n2.getValue()<<endl;
    
    n1++;
    n2++;
    cout<<"Value of n1 is "<<n1.getValue()<<endl;
    cout<<"Value of n2 is "<<n2.getValue()<<endl;

    n2.setValue(n1++);
    cout<<"Value of n1 is "<<n1.getValue()<<endl;
    cout<<"Value of n2 is "<<n2.getValue()<<endl;

    n1--;
    n2--;
    cout<<"Value of n1 is "<<n1.getValue()<<endl;
    cout<<"Value of n2 is "<<n2.getValue()<<endl;

    n2.setValue(n1--);
    cout<<"Value of n1 is "<<n1.getValue()<<endl;
    cout<<"Value of n2 is "<<n2.getValue()<<endl;
    return 0;
}