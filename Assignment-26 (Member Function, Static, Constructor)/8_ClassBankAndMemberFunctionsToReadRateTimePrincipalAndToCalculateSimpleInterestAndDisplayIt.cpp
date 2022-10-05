/* 8. Define a class Bank and define member functions to read principal , rate of interest
and year. Another member functions to calculate simple interest and display it.
Initialise all details using constructor. */

#include<iostream>
using namespace std;

class Bank
{
    private:
        float principal, rate, years;
    public:
        Bank()
        {
            float p, r, y;
            cout<<"Enter principal amount, rate of interest and time: ";
            cin>>p>>r>>y;
            if(p < 0)
                principal = -p;
            else
                principal = p;
            
            if(r < 0)
                rate = -r;
            else
                rate = r;
            
            if(y < 0)
                years = -y;
            else
                years = y;
        }
        void displaySimpleInterest()
        {
            cout<<"Simple interest is "<<principal * rate * years / 100.0;
        }
};

int main()
{
    Bank b;
    b.displaySimpleInterest();
    return 0;
}