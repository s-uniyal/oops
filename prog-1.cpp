
#include <iostream>
#include<string>
using namespace std;

class bank
{

public:

        string name ;
        int acc_no ;
        float bal_amt ;

        void info();
        float deposit( );
        float withdraw();
        void display();


};

void bank :: info () {
     cout<<"enter the name of account holder:   ";
     cin>> name ;

     cout<<"enter the account number:   ";
     cin>> acc_no ;

     cout<<"enter the balance:   ";
     cin>> bal_amt;
};

float bank :: deposit() {
     float x;
     cout<<"enter the amount to be deposited:   ";
     cin>> x;
bal_amt = bal_amt + x;

     return bal_amt;

};

float bank :: withdraw() {
     float x;
     cout<<"enter the amount to be withdrawn:   ";
     cin>> x;
bal_amt = bal_amt - x;

     return bal_amt ;

};

void bank :: display() {

     cout << "name of account holder: "<<name<<endl;
     cout<< "account number is :" <<acc_no<<endl;
     cout << "balance in account is :"<<bal_amt<<endl;


};


int main ()
{
    bank user;
    user.info();
    user.display();
    user.deposit();
    user.display();
    user.withdraw();
    user.display();

    return 0;

};
