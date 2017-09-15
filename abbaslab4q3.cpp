# abbaslab4
// q 3


#include<iostream>
using namespace std;
void max_min()
{
 int x,y;
 cout<<"Enter two numbers : ";
 cin>>x>>y;
 if(x>y)
 {
  cout<<x<<" maximum"<<endl;
  cout<<y<<" minimum";
 }
 else if(y>x)
 {
  cout<<y<<" maximum"<<endl;
  cout<<x<<" minimum";
 }
 else
  cout<<x<<" and "<<y<<" are equal.";
}
int main()
{
 max_min();
 return 0;
}
