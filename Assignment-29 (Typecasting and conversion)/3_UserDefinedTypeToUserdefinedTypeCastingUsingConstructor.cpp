/*
3. Create a Product class and convert Product type to Item type using constructor
int main()
{
Item i1;
Product p1;
p1.setData(3,4);
i1=p1;
return 0;
}

(done)
*/

#include<iostream>
using namespace std;

class Product
{
    private:
        int a, b;
    public:
        void setData(int a, int b)
        {
            this->a = a;
            this->b = b;
        }
        void displayProduct()
        {
            cout<<"a="<<a<<" b="<<b<<endl;
        }
        operator int()
        {
            return a + b;
        }
};

class Item
{
    private:
        int z;
    public:
        Item()
        {

        }
        Item(Product P)  // Converting Product Type To Item Type using Constructor
        {
            z = P;
        }
        void setItem(int z)
        {
            this->z = z;
        }
        void displayItem()
        {
            cout<<z<<endl;
        }
};

int main()
{
    Product p1;
    p1.setData(3, 4);
    p1.displayProduct();

    Item i1;
    i1 = p1;
    i1.displayItem();
    return 0;
}