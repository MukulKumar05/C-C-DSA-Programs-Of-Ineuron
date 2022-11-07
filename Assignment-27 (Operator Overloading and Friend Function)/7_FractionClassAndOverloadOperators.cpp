// (done)
/* 7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
Output
image.png
*/

#include<iostream>
using namespace std;

class Fraction
{
    private:
        long int numerator;
        long int denominator;
    public:
        Fraction(long int n = 0, long int d = 0)
        {
            numerator = n;
            denominator = d;
        }
        void setFraction(long int n, long int d)
        {
            numerator = n;
            denominator = d;
        }
        void displayFraction()
        {
            cout<<numerator<<"/"<<denominator<<endl;
        }
        Fraction operator++() // preIncrement
        {
            Fraction temp;
            temp.numerator = ++numerator;
            temp.denominator = ++denominator;
            return temp;
        }
        Fraction operator++(int useless) // postIncrement
        {
            Fraction temp;
            temp.numerator = numerator++;
            temp.denominator = denominator++;
            return temp;
        }
        friend istream & operator>>(istream &, Fraction &);
        friend ostream & operator<<(ostream &, Fraction);

};

istream & operator>>(istream &os, Fraction &f2)
{
    long int n, d;
    cout<<"Enter value of numerator: ";
    cin>>n;
    cout<<"Enter value of denominator: ";
    cin>>d;

    f2.setFraction(n, d);
    
    return os;
}

ostream & operator<<(ostream &os, Fraction f2)
{
    f2.displayFraction();
    return os;
}

int main()
{
    Fraction f1(3, 7), f2;
    cout<<f1<<endl<<f2;

    ++f1;
    ++f2;

    cout<<f1<<endl<<f2;

    cin>>f1;
    cin>>f2;

    cout<<f1<<endl<<f2;

    f2 = ++f1;

    cout<<f1<<endl<<f2;

    f1++;
    f2++;
    cout<<f1<<endl<<f2;

    f2 = f1++;

    cout<<f1<<endl<<f2;
    return 0;
}