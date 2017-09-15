# abbaslab4
// q 1


#include<iostream>
using namespace std;
void cube(int x)
{
  int cub;
  cub=x*x*x;
  cout<<"Cube of the number : "<<cub;
}
int main()
{
  int num;
  cout<<"Enter a number : ";
  cin>>num;
  cube(num);
  return 0;
}
