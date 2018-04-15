#include <iostream>

using namespace std;

class crectangle
{
  public:
  int area;
  
  crectangle()
  {
    area = 20;
    cout<<"area:"<<area<<endl;
  };
  
  crectangle(int l, int b)
  {
    cout<<"area: "<<l*b;
  };
};
int main() {
  crectangle();
  crectangle(6,5);
  
  return 0;
};
