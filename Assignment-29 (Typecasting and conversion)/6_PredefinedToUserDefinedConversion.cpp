/*
6. Create a Time class and take Duration in seconds. Now you need to convert seconds(i.e in int ) to Time class.
Example-
int main()
{
int duration;
cout<<”Enter time duration in minutes”;
cin>>duration;
Time t1 = duration;
t1.display();
return 0;
}

(done)
*/

#include<iostream>
using namespace std;

class Time
{
    private:
        int seconds;
    public:
        Time(int minutes) // converting predefined type to user defined type using constructor
        {
            seconds = minutes * 60;
        }
        void setTime(int seconds)
        {
            this->seconds = seconds;
        }
        void display()
        {
            cout<<seconds<<" seconds"<<endl;
        }
};

int main()
{
    int duration;
    cout<<"Enter time duration in minutes: ";
    cin>>duration;
    Time t1 = duration;
    t1.display();
    return 0;
}