/* 4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.
Output -
image.png
(done)
*/

#include<iostream>
using namespace std;

class Time
{
    private:
        int hours, minutes, seconds;
    public:
        void inputTimeData()
        {
            int h, m, s;
            cout<<"--------------------\n";
            cout<<"Enter Hours    :  ";
            cin>>h;
            cout<<"Enter Minutes  :  ";
            cin>>m;
            cout<<"Enter Seconds  :  ";
            cin>>s;

            if(h < 0)
                hours = -h;
            else
                hours = h;

            if(m < 0)
                minutes = -m;
            else
                minutes = m;
            
            if(s < 0)
                seconds = -s;
            else
                seconds = s;
        }
        void displayTime()
        {
            cout<<"Hours    :  "<<hours<<endl;
            cout<<"Minutes  :  "<<minutes<<endl;
            cout<<"Seconds  :  "<<seconds<<endl;
        }
        bool operator==(Time T)
        {
            if(hours == T.hours && minutes == T.minutes && seconds == T.seconds)
                return true;
            else
                return false;
        }
        friend ostream & operator<<(ostream &, Time);
        friend istream & operator>>(istream &, Time&);
        
};

ostream & operator<<(ostream &os, Time t)
{
    cout<<"Hours    :  "<<t.hours<<endl;
    cout<<"Minutes  :  "<<t.minutes<<endl;
    cout<<"Seconds  :  "<<t.seconds<<endl;
    return os;
}

istream & operator>>(istream &i, Time &t)
{
    int h, m, s;
    cout<<"--------------------\n";
    cout<<"Enter Hours    :  ";
    cin>>h;
    cout<<"Enter Minutes  :  ";
    cin>>m;
    cout<<"Enter Seconds  :  ";
    cin>>s;

    if(h < 0)
        t.hours = -h;
    else
        t.hours = h;

    if(m < 0)
        t.minutes = -m;
    else
        t.minutes = m;
    
    if(s < 0)
        t.seconds = -s;
    else
        t.seconds = s;
    return i;
}



int main()
{
    Time t1, t2;
    cout<<"Enter First Time:\n";
    cin>>t1;
    cout<<"First Time\n";
    cout<<t1;

    cout<<endl<<"Enter Second Time:\n";
    cin>>t2;
    cout<<"Second Time\n";
    cout<<t2;
    cout<<endl;

    if(t1 == t2)
        cout<<"Times are same"<<endl;
    else
        cout<<"Times are not same"<<endl;
    
    return 0;
}