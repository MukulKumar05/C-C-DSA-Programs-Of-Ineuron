/*
10. Create two classes Rupee and Dollar and add necessary functions to support Rupee to Dollar and Dollar to Rupee conversion.
Example-
int main()
{
Rupee r = 23;
Dollar d = r; // Rupee to Dollar conversion
d.display();
r.display();
r = d; // Dollar to Rupee Conversion
d.display();
r.display();
return 0;
}

(done)
*/

#include<iostream>
using namespace std;

class Rupee
{
    private:
        float r;
    public:
        Rupee(float n)
        {
            r = n;
        }
        void displayRupee()
        {
            cout<<r<<" rupees"<<endl;
        }
        float getRupee()
        {
            return r;
        }
        operator float()
        {
            return r;
        }
};

class Dollar
{
    private:
        float d;
    public:
        Dollar()
        {

        }
        Dollar(float n)
        {
            d = n;
        }
        Dollar(Rupee r1)
        {
            d = r1.getRupee() / 80.0;
        }
        void displayDollar()
        {
            cout<<"$"<<d<<endl;
        }
        operator Rupee()
        {
            return d * 80.0;
        }

};

int main()
{
    Rupee r = 23;
    Dollar d = r;     // Rupee to Dollar conversion
    d.displayDollar();
    r.displayRupee();
    r = d;            // Dollar to Rupee Conversion
    d.displayDollar();
    r.displayRupee();
    return 0;
}