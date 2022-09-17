//9. Define a class Bill and define its member function get() to take detail of customer , \
calculateBill() function to calculate electricity bill using below tariff : \
Upto 100 unit RS. 1.20 per unit \
From 100 to 200 unit RS. 2 per unit \
Above 200 units RS. 3 per unit.
#include<iostream>
using namespace std;
class Bill
{
    private:
        int unit;
        float amount;
    public:
        Bill(int a)
        {
            unit=a;
        }
        void calculate()
        {
            if(unit<100)
                amount=unit*1.2;
            else if(unit>100 && unit<=200)
                amount=1.2*100+(unit-100)*2;
            else
                amount=1.2*100+2*100+(unit-200)*3;
        }
        void get()
        {
            cout<<"Total bill of coustomer is :"<<amount;
        }
};
int main()
{
    Bill b1(250);
    b1.calculate();
    b1.get();
    return 0;
}
