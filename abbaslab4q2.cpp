# abbaslab4
/ q 2


#include<iostream>
using namespace std;
void circle()
{
  float r,d,c,ar;
  cout<<"Enter radius of circle : ";
  cin>>r;
  d=2*r;
  c=3.14*d;
  ar=3.14*r*r;
  cout<<"radius of circle : "<<r<<endl;
  cout<<"Diameter of circle : "<<d<<endl;
  cout<<"Circumference of the circle : "<<c<<endl;
  cout<<"Area of the circle : "<<ar;
}
int main()
{
 circle();
 return 0;
}
