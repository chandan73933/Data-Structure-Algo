#include<iostream>
using namespace std;
int swap(int a,int b)
{
  int temp;
  temp=a;
  a=b;
  b=temp;
  cout<<"\n value of a&b after swap";
  cout<<a;
  cout<<"\n"<<b;
  return 0;
}
int main()
{
int a,b;
cin>>a;
cin>>b;
cout<<"\n value before swap"<<" ";
cout<<a;
cout<<b;
cout<<swap(a,b);
}
