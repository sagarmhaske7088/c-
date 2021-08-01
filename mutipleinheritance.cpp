#include <iostream>
using namespace std;

class sagar
{
public:
  void showdata ()
  {
    cout << "Base Class 1\n";
  }
};

class vikas
{
public:
  void showdata1 ()
  {
    cout << "Base Class 2\n";
  }
};


class kiran:public sagar, public vikas
{
};

int main ()
{
  kiran myObj;
  myObj.showdata();
  myObj.showdata1();
}

  