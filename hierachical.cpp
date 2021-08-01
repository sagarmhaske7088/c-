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
class parent:public student
{
    public:
    void showdata2()
    {
        cout<<"\n No of student is 3";
    }
    
};
int main()
{
    parent p;
    tech t;
    student s;
    s.showdata();
    t.showdata1();
    p.showdata2();
    
}
    