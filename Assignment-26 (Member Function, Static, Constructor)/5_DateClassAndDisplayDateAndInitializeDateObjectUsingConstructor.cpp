/* 5. Define a class Date and write a program to Display Date and initialise date object
using Constructors. */

#include<iostream>
using namespace std;

class Date
{
    private:
        int day, month, year;
    public:
        Date()
        {
            day = 1;
            month = 1;
            year = 1976;
        }
        Date(int d, int m, int y)
        {
            day = d;
            month = m;
            year = y;
        }
        void showDate()
        {
            cout<<day<<"-"<<month<<"-"<<year<<endl;
        }
};

int main()
{
    Date d1, d2(5, 10, 2022);
    d1.showDate();
    d2.showDate();
    return 0;
}