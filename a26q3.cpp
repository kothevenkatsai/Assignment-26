//3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class Cube
{
    private:
        int a;
    public:
        Cube(int edge)
        {
            a=edge;
        }
        void Volume()
        {
            cout<<"volume of cube is:"<<(a*a*a)<<endl;
        }
        ~Cube()
        {
            cout<<"byeee";
        }

};
int main()
{
    Cube c1(5);
    c1.Volume();
    return 0;
}
