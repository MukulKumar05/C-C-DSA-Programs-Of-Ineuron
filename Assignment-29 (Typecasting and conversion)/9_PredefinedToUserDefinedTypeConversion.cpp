/*
9. Create a Dollar class and add necessary functions to support int to Dollar type conversion.
Example-
int main()
{
int x = 50;
Dollar d;
d = x;
d.display();
return 0;
}

(done)
*/

#include<iostream>
using namespace std;

class Dollar
{
    private:
        int d;
    public:
        Dollar()
        {

        }
        Dollar(int n)
        {
            d = n;
        }
        void displayDollar()
        {
            cout<<"$"<<d<<endl;
        }

};

int main()
{
    int x = 50;
    Dollar d;
    d = x;
    d.displayDollar();
    return 0;
}