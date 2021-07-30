#include<iostream>
using namespace std;
class Time
{
int time;
public:
void getdata()
{
cout<<"\nEnter the time :";
cin>>time;
}
void showdata()
{
cout<<"\nThe time is :"<<time;
}
};

class Date
{
int date;
public:
void getdata()
{
cout<<"\nEnter the date :";
cin>>date;
}
void showdata()
{
cout<<"\nThe date is :"<<date;
}
};

class Person
{
//char name[20];
char gender[30];
public:
void getdata()
{
cout<<"\nEnter the person gender:";
cin>>gender;
}
void showdata()
{
cout<<"\nThe person gender is :"<<gender;
}
};

class student
{
char u[12];
public:
void getdata()
{
cout<<"\nEnter the student name:";
cin>>u;
}
void showdata()
{
cout<<"\nThe student name is :"<<u;
}
};

class Fan
{
char name[30];
public:
void getdata()
{
cout<<"\nEnter the fan company name :";
cin>>name;
}
void showdata()
{
cout<<"\nThe fan comapany name is :"<<name;
}
};

class Point
{
int x,y;
public:
void getdata()
{
cout<<"\nEnter the x and y coordinate point :";
cin>>x>>y;
}
void showdata()
{
cout<<"\nThe x and y coordinates :"<<x<<y;
}
};
class Box
{
int a;
public:
void getdata()
{
cout<<"\nEnter the box type :";
cin>>a;
}
void showdata()
{
cout<<"\nThe box type  is :"<<a;
}
};

int main()
{
Time t;
Date d;
Person p;
student s;
Fan f;
Point k;
Box b;
t.getdata();
d.getdata();
p.getdata();
s.getdata();
f.getdata();
k.getdata();
b.getdata();

t.showdata();
d.showdata();
p.showdata();
s.showdata();
f.showdata();
k.showdata();
b.showdata();

return 0;
}
























