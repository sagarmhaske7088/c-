#include <iostream>
using namespace std;
int a,b,c;//globle variable
class A
{
  
  public:
  void add()  // virtual use the ignore class
  {
    cout<<"Enter two Number:"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"Addition is:"<<c<<endl;
  }
  
};
class B:public A
{
  public:
  void add()
{
   cout<<"Enter two Number:"<<endl;
    cin>>a>>b;
  c=a-b;
  cout<<"Sub is:"<<c<<endl;
}
};
int main() 
{
 /* A *p;//Pointer to cll object
  B b;
  p=&b;
  p->add();*/
    B b;
    b.add();
    //b.A::add();//obj to accss two class
    
    return 0;
}
