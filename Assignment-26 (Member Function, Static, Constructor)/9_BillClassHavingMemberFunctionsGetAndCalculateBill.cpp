/* 9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
Upto 100 unit RS. 1.20 per unit
From 100 to 200 unit RS. 2 per unit
Above 200 units RS. 3 per unit. */

#include<iostream>
#include<string.h>
using namespace std;

class Bill
{
    private:
        char customerName[40];
        int accountNumber;
        float unitsConsumed;
    public:
        void getCustomerDetails()
        {
            char custName[40];
            int acNumber;
            float units;
            cout<<"Enter customer name: ";
            cin>>ws;
            cin.getline(custName, 40);
            cout<<"Enter account number: ";
            cin>>acNumber;
            cout<<"Enter units of electricity consumed: ";
            cin>>units;

            strcpy(customerName, custName);

            if(acNumber < 0)
                accountNumber = -acNumber;
            else
                accountNumber = acNumber;
            
            if(units < 0)
                unitsConsumed = -units;
            else
                unitsConsumed = units;   
        }
        double calculateBill()
        {
            if(unitsConsumed >= 0 && unitsConsumed <= 100)
                return 1.20 * unitsConsumed;
            else if(unitsConsumed > 100 && unitsConsumed <= 200)
                return 1.20 * 100 + (unitsConsumed - 100) * 2;
            else
                return (unitsConsumed - 200) * 3 + 320;
        }
        void showAccountDetails()
        {
            cout<<endl;
            cout<<"Customer name: "<<customerName<<endl;
            cout<<"Account number: "<<accountNumber<<endl;
            cout<<"Electricity units consumed: "<<unitsConsumed<<endl;
        }
};

int main()
{
    Bill b1;
    b1.getCustomerDetails();
    cout<<"Electricity bill generated for ";
    b1.showAccountDetails();
    cout<<"Bill Amount: "<<b1.calculateBill()<<endl;
    return 0;
}
