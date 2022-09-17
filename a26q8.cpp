//8. Define a class Bank and define member functions to read principal , rate of interest \
and year. Another member functions to calculate simple interest and display it. \
Initialise all details using constructor.
#include<iostream>
using namespace std;
class Bank
{
    private:
        int p;
        int r;
        int t;
    public:
        Bank(int pr,int ra,int ti)
        {
            p=pr;
            r=ra;
            t=ti;
        }
        void calculate()
        {
            cout<<(p*r*t)/100;
        }
};
int main()
{
    Bank b1(200,10,5);
    b1.calculate();
    return 0;
}
