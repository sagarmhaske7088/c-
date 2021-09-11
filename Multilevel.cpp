#include<iostream>
using namespace std;
class A
{ 
  protected:
int a,b;
    public:
  void input()
  {
    cout<<"Enter two number :"<<endl;
    cin>>a>>b;
  }
};
class B:public A
{
  int c;
  public:
  void add()
  {
    c=a+b;
    cout<<"Addtion is :"<<c<<endl;
  }
  void sub()
  {
    c=a-b;
    cout<<"Sub is :"<<c<<endl;
  }
};
class C:public B
{
  int c;
  public:
  void Mul()
  {
    c=a*b;
    cout<<"mul is :"<<c<<endl;
      }
      void divi()
      {
        c=a/b;
        cout<<"div is :"<<c<<endl;
        
      }
};

 
  int main()
  {
    C p;
 p.input();
 p.add();
 p.sub();
 p.Mul();
 p.divi();
 
  return 0;
  
}
