/*
8. Create a Rupee class and convert it into int. And Display it.
Example-
int main()
{
Rupee r = 10;
int x = r;
cout<<x;
return 0;
}

(done)
*/

#include<iostream>
using namespace std;

class Rupee
{
    private:
        int r;
    public:
        Rupee(int n)
        {
            r = n;
        }
        void displayRupee()
        {
            cout<<r<<" rupees"<<endl;
        }
        operator int()
        {
            return r;
        }
};

int main()
{
    Rupee r = 10;
    int x = r;
    cout<<x;
    return 0;
}