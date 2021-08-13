#include<iostream>
using namespace std;
class A
{
public:
void show()
{
cout<<"\n Show the A";
}
};
void anymethod(A Pa)
{
pa.show();
}
int main()
{
A a;
anymethod(a);
return 0;
}
