// (done)
/* 9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa). */

#include<iostream>
#include<string.h>
using namespace std;

class mystring
{
    private:
        char str[100] = {'\0'};
    public:
        void setString(char s[])
        {
            strcpy(str, s);
        }
        void displayString()
        {
            cout<<str;
        }
        mystring operator!()
        {
            int i;
            mystring temp;
            for(i = 0; str[i]; i++)
            {
                if(str[i] >= 65 && str[i] <= 90)
                    temp.str[i] = str[i] + 32;
                else if(str[i] >= 97 && str[i] <= 122)
                    temp.str[i] = str[i] - 32;
                else
                    temp.str[i] = str[i];
            }
            return temp;
        }
};

int main()
{
    mystring s1;
    s1.setString((char *)"Hello World AS 1 String!!!");
    s1.displayString();
    cout<<endl;
    s1 = !s1;
    s1.displayString();
    return 0;
}
