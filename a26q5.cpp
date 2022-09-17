//5. Define a class Date and write a program to Display Date and initialise date object using Constructors.
#include<iostream>
using namespace std;
class Date
{
    private:
        int d;
        int m;
        int y;
    public:
        Date(int date,int month,int year)
        {
            d=date;
            m=month;
            y=year;
        }
        void display()
        {
            cout<<d<<"-"<<m<<"-"<<y<<endl;
        }

};
int main()
{
    Date d1(17,9,2022);
    d1.display();
    return 0;
}
