//7. Define a class Box and write a program to enter length, breadth and height and \
initialise objects using constructor also define member functions to calculate volume \
of the box.
#include<iostream>
using namespace std;
class Box
{
    private:
        int length;
        int breadth;
        int height;
    public:
        Box(int l,int b,int h)
        {
            length=l;
            breadth=b;
            height=h;
        }
        void volume()
        {
            cout<<"Volume of box is :"<<length*breadth*height;
        }
};
int main()
{
    Box b1(2,3,4);
    b1.volume();
    return 0;
}
