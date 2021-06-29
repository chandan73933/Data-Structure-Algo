#include<iostream>
using namespace std;
void preg(int a[],int n)
{
 for(int i=0;i<n;i++)
{
int j;
  for(int j=i-1;j>=0;j--)
   {
   if(a[j]>a[i])
   {
   cout<<a[j]<<" ";
    break;
   }
   }
if(j==-1)
{
cout<<"-1"<<" ";
}
}
}
int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
preg(a,n);
}
