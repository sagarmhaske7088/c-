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
   // public:
    
};
int main()
{
    parent p;
    p.showdata();
    p.showdata1();
    
}
    
    
    
