/* 5. Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods
};
Overload the operator unary minus (-) to negate the numbers. 
(done)
*/

#include<iostream>
using namespace std;

class Numbers
{
    private:
        int x, y, z;
    public:
        void setNumbers(int a, int b, int c)
        {
            x = a;
            y = b;
            z = c;
        }
        void displayNumbers()
        {
            cout<<"first number is "<<x<<endl;
            cout<<"second number is "<<y<<endl;
            cout<<"third number is "<<z<<endl;
        }
        Numbers operator-()
        {
            Numbers temp;
            temp.x = -x;
            temp.y = -y;
            temp.z = -z;
            return temp;
        }
};

int main()
{
    Numbers n1, n2;
    n1.setNumbers(3, -7, 9);
    n2 = -n1;
    n1.displayNumbers();
    n2.displayNumbers();
    return 0;
}