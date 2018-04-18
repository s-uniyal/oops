#include <iostream>

using namespace std;
class B;
class A
{
  int x;
  public:

  A ()
  {
    cout<<"enter the value of x: ";
    cin>>x;


  };
  friend void great (A ,  B );
};

class B
{
  int y;
  public:
   B ()
   {
     cout<<"enter the value of y: ";
    cin>>y;

   };
   friend void great (A , B );
};


void great (A a, B b)
{

  if (b.y > a.x)
  {
    cout<<b.y<<" of class B is greater";
  }
  else if (a.x > b.y)
  {
    cout<<a.x<<" of class A is greater";

  }
  else
  {
    cout<<"both values are equal";
  };
};
int main() {

  A a;
  B b;


   great(a,b);

  return 0;
};
