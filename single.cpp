#include<iostream>
using namespace std;
class a
{
char x[24];
public:
void getdata()
{
cout<<"enter the name";
cin>>x;
}
void showdata1()
{
cout<<"The name is :"<<x;
}
};

class b : public a
{
//char b1[32];
public:
void showdata()
{
cout<<" show of b :";
}
};

 int main()
 {
 /*a c;
 c.getdata();
 c.showdata();*/
 b d;
 d.showdata1();
 d.showdata();
 return 0;
 }
