/*
7. Create two class Time and Minute and add required getter and setter including constructors. Now you need to type cast Time object into Minute to fetch the minute from Time and display it.
Example -
int main()
{
Time t1(2,30);
t1.display();
Minute m1;
m1.display();
m1=t1 // Fetch minute from time
t1.display();
m1.display();
return 0;
}

(done)
*/

#include<iostream>
using namespace std;

class Minute
{
    private:
        int min;
    public:
        Minute()
        {
            min = 0;
        }
        Minute(int m)
        {
            min = m;
        }
        void setMinutes(int m)
        {
            min = m;
        }
        void displayMinutes()
        {
            cout<<min<<" minutes"<<endl;
        }
};

class Time
{
    private:
        int hours, mint;
    public:
        Time()
        {
            hours = 0;
            mint = 0;
        }
        Time(int h, int m)
        {
            hours = h;
            mint = m;
        }
        void setTime(int h, int m)
        {
            hours = h;
            mint = m;
        }
        void displayTime()
        {
            cout<<hours<<" hours and "<<mint<<" minutes"<<endl;
        }
        operator Minute()
        {
            return hours * 60 + mint;
        }
};

int main()
{
    Time t1(2,30);
    t1.displayTime();
    Minute m1;
    m1.displayMinutes();
    m1 = t1; // Fetch minute from time
    t1.displayTime();
    m1.displayMinutes();
    return 0;
}