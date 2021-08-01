#include<iostream>
using namespace std;
class student
{
    public:
    void showdata()
    {
        cout<<"\nNo of student is 1";
        
    }
};
class tech:public student
{
    public:
    void showdata1()
    {
        cout<<"\nNo of student is 2";
        
    }
};
class parent:public tech
{
    public:
    void showdata2()
    {
        cout<<"\nNo of student is 3";
    }
    
};

class stud:public tech
{
    public:
    void showdata3()
    {
        cout<<"\nNo of student is 4";
    }
};
    
int main()
{
    stud k;
    parent p;
    tech t;
    student s;
    s.showdata();
    t.showdata1();
    p.showdata2();
    k.showdata3();
}
    