// (done)
/*
10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
*/

#include<iostream>
using namespace std;

class Matrix
{
    private:
        int a[3][3];
    public:
        void inputMatrixData()
        {
            cout<<"Enter elements of matrix of order (3X3):\n";
            int i, j;
            for(i = 0; i < 3; i++)
            {
                for(j = 0; j < 3; j++)
                {
                    cin>>a[i][j];
                }
            }
        }
        void displayMatrix()
        {
            int i, j;
            for(i = 0; i < 3; i++)
            {
                for(j = 0; j < 3; j++)
                {
                    cout<<a[i][j]<<"\t";
                }
                cout<<endl;
            }
        }
        Matrix operator+(Matrix m)
        {
            Matrix temp;
            int i, j;
            for(i = 0; i < 3; i++)
            {
                for(j = 0; j < 3; j++)
                {
                    temp.a[i][j] = a[i][j] + m.a[i][j];
                }
            }
            return temp;
        }
};

int main()
{
    Matrix m1, m2, m3;
    m1.inputMatrixData();
    cout<<endl<<"Matrix elements are:"<<endl;
    m1.displayMatrix();
    m2.inputMatrixData();
    cout<<endl<<"Matrix elements are:"<<endl;
    m2.displayMatrix();
    m3 = m1 + m2;
    cout<<endl<<"Matrix elements are:"<<endl;
    m3.displayMatrix();
    return 0;
}