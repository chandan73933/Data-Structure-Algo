#include<iostream>
using namespace std;
int main()
{
int n;int temp;
cout<<"enter the size of the array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
for(int i=0;i<n;i++)
{
cout<<"\n"<<arr[i];
}
for(int i=0;i<n;i++)
{
	for(int j=i+1;j<n;j++)
	{
	if(arr[i]>arr[j])
	{
	temp= arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	}
	}
	
}
cout<<"\n sorted array is";
for(int i=0;i<n;i++)
{
cout<<"\n"<<arr[i];
}
}
