//4. Define a class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
int cnt=0;
class Counter
{
    public:
        Counter()
        {
            ++cnt;
        }
};
int main()
{
    Counter c1,c2,c3;
    cout<<"count :"<<cnt;
    return 0;

}
