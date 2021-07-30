#include<iostream>
using namespace std;
    class Student
    {
        int rn;
        //char name[30];
        public:
        void getdata()
        {
            cout<<"Enter the roll number : ";
            cin>>rn;
        }
            void showdata()
            {
            
            
            cout<<"\n student roll number is :"<<rn;
           
            } 
        };
        class sagar
        {
    
    
          char name[30];
          public:
          void getdata()
          {
    cout<<"\n Enter the student name :";
    cin>>name;
    }
    void showdata()
    {
        cout<<"\nstudent name is :"<<name;
    }
    };
    
    int main()
    {
        Student s;
          sagar p;
        s.getdata();
        p.getdata();
        s.showdata();
        p.showdata();
        
        return 0;
    }
    
    
    
    
    
    
    
    
    
    
