#include <iostream>

using namespace std;

int volume (int a)
{
  cout<<"volume of cube: "<< a*a*a<<endl;
};


float volume (int r, int h)
{
  cout<<"volume of cylinder: "<< 3.14*r*r*h<<endl;
};


int volume (int l, int b, int h)
{
  cout<<"volume of rectangular box: "<< l*b*h<<endl;
};

int main() {
  
  volume(5);
  volume(4, 5);
  volume (2, 4, 5);
  return 0;
};
