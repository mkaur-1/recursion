//print name N times
#include<iostream>
using namespace std;


void f(int i,int n)
{
  if(i>n)
    return;
  cout<<"Manpreet"<<endl;
  f(i+1,n);
}
  
  
main()
{
  int n;
  cin>>n;
  f(1,n);
}
