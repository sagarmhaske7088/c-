#include<iostream>
using namespace std;
int a,b,c;  //global
class A
{ 
    public:
  void input();
  void add();
};
void A:: input()  //outside declere variable using scopresolation operator
{
    cout<<"Enter two number :"<<endl;
    cin>>a>>b;
  }
  void A::add()
  {
    c=a+b;
    cout<<"Addtion is :"<<c<<endl;
  }
  
class B
{
  public:
  void sub();
  
};
void B:: sub()
{
    c=a-b;
    cout<<"Sub is :"<<c<<endl;
  }
class C:public A,public B
{
  public:
  void Mul();
  void Divi();
};
void C::Mul()
{
    c=a*b;
    cout<<"mul is :"<<c<<endl;
      }
      void C::Divi()

      {
        c=a/b;
        cout<<"div is :"<<c<<endl;
        
      }

 
  int main()
  {
    C p;
 p.input();
 p.add();
 p.sub();
 p.Mul();
 p.Divi();
 
  return 0;
  
}
