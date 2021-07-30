#include<iostream>
using namespace std;
class Student
{
int rn;
char name[20];
float fees;

public:
void getdata()
{
cout<<"Enter the roll number :";
cin>>rn;

cout<<"Enter the name :";
cin>>name;

cout<<"Enter the fees :";
cin>>fees;
}


void showdata()
{
cout<<"The roll is :"<<rn;
cout<<"The name is :"<<name;
cout<<"fees is a :"<<fees;
}
};
int main()
{
Student s;
s.getdata();
s.getdata();
s.getdata();
s.showdata();
s.showdata();
s.showdata();
return 0;
}
