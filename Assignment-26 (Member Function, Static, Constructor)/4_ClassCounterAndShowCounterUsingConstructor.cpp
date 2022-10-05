// 4. Define a class Counter and Write a program to Show Counter using Constructor.

#include<iostream>
using namespace std;

class Counter
{
    private:
        static int executionCount;
    public:
        Counter()
        {
            executionCount++;
        }
        static int getExecutionCount()
        {
            return executionCount;
        }
};
int Counter::executionCount;

int main()
{
    Counter c1, c2, c3;
    cout<<"Number of objects of Counter class are "<<Counter::getExecutionCount()<<endl;
    return 0;
}
