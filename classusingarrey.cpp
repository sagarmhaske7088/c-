#include<iostream>
using namespace std;
class Country
{
    char name[20];
    public:
    void getdata()
    {
        cout<<"Enter the country name :";
        cin>>name;
    }
    void showdata()
    {
        cout<<"\nThe country name is :"<<name;
    }
};
class Player
{
    char name[20];
    public:
    void getdata()
    {
        cout<<"Enter the player name :";
        cin>>name;
    }
    void showdata()
    {
        cout<<"\nThe player name is :"<<name;
    }
};
class Matches
{
    int no;
    public:
    void getdata()
    {
        cout<<"Enter the matches no :";
        cin>>no;
    }
    void showdata()
    {
        cout<<"\nThe matches no is :"<<no;
    }
};
class Age
{
    int a;
    public:
    void getdata()
    {
        cout<<"Enter the age :";
        cin>>a;
    }
    void showdata()
    {
        cout<<"\nThe country name is :"<<a;
    }
};
class Batting
{
   float avg;
    public:
    void getdata()
    {
        cout<<"Enter the batting avg is :";
        cin>>avg;
    }
    void showdata()
    {
        cout<<"\nThe batting avg is :"<<avg;
    }
};
class Bolling
{
  float avg;
    public:
    void getdata()
    {
        cout<<"Enter the bolling avg :";
        cin>>avg;
    }
    void showdata()
    {
        cout<<"\nThe bolling avg is :"<<avg;
    }
};
int main()
{
Country c;
c.getdata();
Player p;
p.getdata();
Matches m;
m.getdata();
Age a;
a.getdata();
Batting b;
b.getdata();
Bolling n;
n.getdata();

c.showdata();
p.showdata();
m.showdata();
a.showdata();
b.showdata();
n.showdata();

return 0;
}