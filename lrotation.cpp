#include<iostream>
using namespace std;
int main()
{
int n,i,arr[100];
cin>>n;
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
int temp = arr[0];
for (i = 0; i < n - 1; i++)

arr[i] = arr[i + 1];
arr[i] = temp;
cout<<"after the rotation";
for(i=0;i<n;i++)
{
cout<<arr[i]<<" ";
}
}
