/* 2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
a. void setTime(int,int,int)
b. void showTime()
c. void normalize()
d. Time add(Time) */

#include<iostream>
using namespace std;

class Time
{
    private:
        int h, m, s;
    public:
        void setTime(int hours, int minutes, int seconds)
        {
            h = hours;
            m = minutes;
            s = seconds;
        }
        void showTime()
        {
            cout<<h<<" Hours "<<m<<" Minutes "<<s<<" Seconds "<<endl;
        }
        void normalize()
        {
            h = 0;
            m = 0;
            s = 0;
        }
        Time add(Time t)
        {
            Time temp;
            temp.h = h + t.h;
            temp.m = m + t.m;
            temp.s = s + t.s;
            return temp;
        }
};

int main()
{
    Time t1, t2, t3;
    t1.setTime(19, 28, 26);
    t2.setTime(2, 3, 9);
    t3 = t1.add(t2);
    t1.showTime();
    t2.showTime();
    t3.showTime();
    t3.normalize();
    t3.showTime();
    return 0;
}