#include<iostream>
using namespace std;
class student
{
int rn;
int age;
char name[20],address[30];
float per;

public:
void getdata()

{
cout<<"\nEnter the name of student :";
cin>>name;

cout<<"\nEnter the roll no of student:";
cin>>rn;

cout<<"\nEnter the address of student :";
cin>>address;

cout<<"\nEnter the percentage of student :";
cin>>per;

}

student(int age)
{
this->age=age;
cout<<"\nThe age of  :"<<age;
}


void showdata()
{
cout<<"\nThe name of student is :"<<name;

cout<<"\nThe roll no of student is :"<<rn;

cout<<"\nThe address of student is :"<<name;

cout<<"\nThe percentage of student is :"<<per;

cout<<"\nThe age of student is :"<<age;



if(per>70)
{
cout<<"\nDistinction:";
}

else if(per<70 && per>=60)
{
cout<<"\nFirst class:";
}

else if(per<60 && per>=40)
{
cout<<"\nsecond class:";
}

else
{
cout<<"\nStudent is fail:";
}
}
~student()
{
 cout<<"\nDtor:";
}
};
 

int main()
{
student s1(10);
//student s;
s1.getdata();
s1.showdata();
return 0;
}







