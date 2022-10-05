/* 6. Define a class student and write a program to enter student details using constructor
and define member function to display all the details. */

#include<iostream>
using namespace std;



class Student
{
    private:
        int rollNumber;
        char studentName[40], courseName[20];
        float marks;
    public:
        Student()
        {
            cout<<"Enter student name: ";
            cin>>ws;
            cin.getline(studentName, 40);
            cout<<"Enter student roll number: ";
            cin>>rollNumber;
            cout<<"Enter course name: ";
            cin>>ws;
            cin.getline(courseName, 20);
            cout<<"Enter marks: ";
            cin>>marks;
        }
        void displayStudentData()
        {
            cout<<"Student Name: "<<studentName<<endl;
            cout<<"Student Roll number: "<<rollNumber<<endl;
            cout<<"Student course name: "<<courseName<<endl;
            cout<<"Student marks: "<<marks<<endl;
        }
};

int main()
{
    Student s1, s2;
    s1.displayStudentData();
    s2.displayStudentData();
    return 0;
}