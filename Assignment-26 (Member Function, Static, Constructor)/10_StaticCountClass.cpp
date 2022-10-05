/* 10. Define a class StaticCount and create a static variable. Increment this variable in a
function and call this 3 times and display the result. */

#include<iostream>
using namespace std;

class StaticCount
{
    private:
        static int count;
    public:
        static int incrementStaticVar()
        {
            count++;
            return count;
        }
};
int StaticCount::count;

int main()
{
    StaticCount::incrementStaticVar();
    StaticCount::incrementStaticVar();
    cout<<"Number of times increment function is executed is "<<StaticCount::incrementStaticVar()<<endl;
    return 0;
}