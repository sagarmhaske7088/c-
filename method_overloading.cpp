//Function overloading
//Compiletime Polymorphism
//Method Overloading
//Static poly
//Early Binding

#include <iostream>
using namespace std;
class A
{
  int a,b,c;
  public:
  void add()
  {
    cout<<"Enter two Number:"<<endl;
    cin>>a>>b;
    c=a+b;
    cout<<"Addition is:"<<c<<endl;
  }
  

void add(int a, int b)
{
  c=a-b;
  cout<<"Sub is:"<<c<<endl;
}
};
int main() 
{
    A a;
    a.add();
    a.add(10,20);
    
    return 0;
}
