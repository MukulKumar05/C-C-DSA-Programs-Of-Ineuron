/*
2. Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
number of instance member variables and also define instance member functions to
set values for time and display values of time.
*/

#include<iostream>
using namespace std;

class Time
{
    private:
        int hours, minutes, seconds;
    
    public:
        void setTime(int x, int y, int z)
        {
            hours = x;
            minutes = y;
            seconds = z;
        }

        void displayTime()
        {
            cout<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds "<<endl;
        }
};

int main()
{
    Time t1;
    t1.setTime(3, 45, 20);
    t1.displayTime();  
    return 0;
}