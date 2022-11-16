/*
5. Create two classes Invent1 and Invent2 and also add necessary constructors in it. Now add functions to support Invent1 to float and Invent1 to Invent2 type.
Example -
int main()
{
Invent1 s1=(4,5);
Invent2 d1;
float tv;
tv=s1;
d1=s1;
return 0;
}

(done)
*/

#include<iostream>
using namespace std;

class Invent2
{
    private:
        float a;
    public:
        Invent2()
        {

        }
        Invent2(float num)
        {
            a = num;
        }
        void setInvent2(float a)
        {
            this->a = a;
        }
        void displayInvent2()
        {
            cout<<a<<endl;
        }
};

class Invent1
{
    private:
        float b, c;
    public:
        Invent1(float b, float c)
        {
            this->b = b;
            this->c = c;
        }
        void setInvent1(float b, float c)
        {
            this->b = b;
            this->c = c;
        }
        void displayInvent1()
        {
            cout<<b<<" "<<c<<endl;
        }
        operator float() // converting Invent1 to float() using typecasting operator
        {
            return b + c;
        }
        operator Invent2() // converting Invent1 to Invent2 using typecasting operator
        {
            return b + c;
        }
};

int main()
{
    Invent1 s1(4,5);
    Invent2 d1;
    s1.displayInvent1();
    d1.displayInvent2();

    float tv;
    tv=s1;
    cout<<tv<<endl;

    d1=s1;
    d1.displayInvent2();
    return 0;
}


