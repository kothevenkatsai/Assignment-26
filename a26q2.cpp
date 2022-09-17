//2. Define a class Time to represent a time with instance variables h,m and s to store \
hour, minute and second. Also define following member functions \
a. void setTime(int,int,int) \
b. void showTime() \
c. void normalize() \
d. Time add(Time)
#include<iostream>
using namespace std;
class time
{
    private:
        int h,m,s;
    public:
        void setTime(int hour,int min,int sec)
        {
            h=hour;
            m=min;
            s=sec;
        }
        void showTime()
        {
            cout<<h<<" hours "<<m<<" min "<<s<<" sec "<<endl;
        }
        void normalize()
        {
            if(m>60)
               {
                h=h+m/60;
                m=m%60;
               }
            if(s>60)
                {
                m=m+s/60;
                s=s%60;
                }
        }
        time add(time t)
        {
            time temp;
            temp.h=h+t.h;
            temp.m=m+t.m;
            temp.s=s+t.s;
            return temp;
        }

};
int main()
{
    time t1,t2,t3;
    t1.setTime(2,120,120);
    t1.normalize();
    t2.setTime(3,120,120);
    t2.normalize();
    t3=t1.add(t2);
    t3.showTime();
    return 0;
}
