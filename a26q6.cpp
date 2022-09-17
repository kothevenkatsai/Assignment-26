//6. Define a class student and write a program to enter student details using constructor and define member function to display all the details.
#include<iostream>
#include<string.h>
using namespace std;
class student
{
    private:
        char name[10];
        int rollno;
        char mobno[10];
        int marks;
    public:
        student(char n[10],int r,char mb[10],int m)
        {
        strcpy(name,n);
        rollno=r;
        strcpy(mobno,mb);
        marks=m;
        }
        void display()
        {
            cout<<"students name :"<<name<<"\nrollno :"<<rollno<<"\nmob no :"<<mobno<<"\nmarks :"<<marks<<endl;
        }
};
int main()
{
    student s1("venkatsai",66,"7218830251",83);
    s1.display();
    return 0;
}
