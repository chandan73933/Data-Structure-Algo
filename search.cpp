#include<iostream>
using namespace std;
int search(int arr[],int n,int key)
{
for(int i=0;i<n;i++)
{
if(arr[i]==key)
{
return arr[i];
}
}
return -1;
}


int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cout<<"enter the array element";
cin>>arr[i];
}
int key;
cout<<"\n enter the key";
cin>>key;
cout<<search(arr,n,key);
}
