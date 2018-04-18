#include <iostream>

using namespace std;

class time
{
  public:
   int hrs;
   int mins;

   void getTime();
   void display();
   void sum (time, time);
};

void time :: getTime()
{

  cin>>hrs>>mins;
};

void time :: display()
{
  cout<<hrs<<":"<<mins;
};

void time :: sum (time tx, time ty)
{


   mins = tx.mins + ty.mins;
   hrs = mins/60;
    mins = mins%60;

  hrs += tx.hrs + ty.hrs;


};

int main()
{

 time t1, t2, t3;
cout<<"enter the first time: "<<endl;
 t1.getTime();
 t1.display();
 cout<<endl;
 cout<<"enter the second time: "<<endl;
  t2.getTime();
 t2.display();
 cout<<endl;
cout<<"sum is: ";
 t3.sum(t1, t2);
 t3.display();

 return 0;
};
