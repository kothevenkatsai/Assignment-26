//10. Define a class StaticCount and create a static variable. Increment this variable in a function and call this 3 times and display the result.
#include<iostream>
using namespace std;
class StaticCount
{
    public:
        static int svar;
        void inc()
        {
            ++svar;
        }
        void display()
        {
            cout<<"result :"<<svar;
        }
};
int StaticCount::svar=0;
int main()
{
    StaticCount s1;
    s1.inc();
    s1.inc();
    s1.inc();
    s1.display();
    return 0;
}
