/*
8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
(done)
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
            cout<<"Enter elements of matrix of order 3X3:\n";
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
        Matrix operator-()
        {
            int i, j;
            Matrix temp;
            for(i = 0; i < 3; i++)
            {
                for(j = 0; j < 3; j++)
                {
                    temp.a[i][j] = -a[i][j];
                }
            }
            return temp;
        }
};

int main()
{
    Matrix m1;
    m1.inputMatrixData();
    cout<<"Entered Matrix is:\n";
    m1.displayMatrix();
    m1 = -m1;
    cout<<"Negation of this matrix is:\n";
    m1.displayMatrix();
    return 0;
}