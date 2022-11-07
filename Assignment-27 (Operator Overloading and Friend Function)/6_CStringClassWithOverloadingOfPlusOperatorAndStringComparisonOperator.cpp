// (done)
/* 6. Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings. */

#include<iostream>
#include<string.h>
using namespace std;

class CString
{
    private:
        char str[40];
    public:
        void setString(char s[])
        {
            strcpy(str, s);
        }
        void displayString()
        {
            cout<<str<<endl;
        }
        CString operator+(CString s)
        {
            CString temp;
            char s2[strlen(str) + 1];
            strcpy(s2, str);
            strcpy(temp.str, strcat(s2, s.str));
            return temp;
        }
        bool operator==(CString s)
        {
            if(strcmp(str, s.str) == 0)
                return true;
            else
                return false;
        }
};

int main()
{
    CString s1, s2, s3, s4;
    s1.setString((char *)"Hello World");
    s1.displayString();
    s2.setString((char *)" Earth");
    s2.displayString();
    s3 = s1 + s2;
    s1.displayString();
    s2.displayString();
    s3.displayString();

    s4.setString((char *)"Hello World");

    if(s1 == s4)
        cout<<"Strings are same";
    else
        cout<<"Strings are not same";
    return 0;
}