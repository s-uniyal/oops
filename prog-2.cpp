#include <iostream>
#include<string>
using namespace std;

class student
{

public:

        string name ;
        int roll_no ;
        float sub1, sub2, sub3, sub4, sub5, percent ;

        float info_calc();
        
        void display();


};

float student :: info_calc () {
     cout<<"enter the name of student:   ";
     cin>> name ;

     cout<<"enter the enrollment number:   ";
     cin>> roll_no ;

     cout<<"enter the marks of sub1:   ";
     cin>> sub1;
     
     cout<<"enter the marks of sub2   ";
     cin>> sub2;
     
     cout<<"enter the marks of sub3:   ";
     cin>> sub3;
     
     cout<<"enter the marks of sub4:   ";
     cin>> sub4;
     
     cout<<"enter the marks of sub5:   ";
     cin>> sub5;
     
     percent = (sub1 + sub2 + sub3 + sub4 + sub5)/5;
     return percent;
};



void student :: display() {

     cout << "name of student is : "<<name<<endl;
     cout<< "enrollment number is :" <<roll_no<<endl;
     cout << "percentage is :"<<percent<<endl;
     
     if(percent>90)
     {
       cout<<"GRADE: O";
    
     } 
     else if ((percent>80) && (percent<=90))
     {
       cout<<"GRADE: A";
     }
     else if((percent>70) && (percent<=80))
     {
       cout<<"GRADE: B";
     }
     else if ((percent>60) && (percent<=70))
     {
       cout<<"GRADE: C";
     } 
     else if ( (percent>50) && (percent<=60))
     {
       cout<<"GRADE: D";
     }
     else 
     {
       cout<<"GRADE: F";
     }


};


int main ()
{
    student user;
    user.info_calc();
    user.display();
   

    return 0;

};
