#include<iostream>
using namespace std;
int selection(int a[],int i,int j,int n,int temp)
{
for(i=0;i<n-1;i++)
{
	for(int j=i+1;j<n;j++)
	{
	if(a[i]>a[j])
	{
	temp=a[j];
	a[j]=a[i];
	a[i]=temp;
	}
	}
	}
	return 0;
}
int main()
{
int n;
cin>>n;
int a[n];
int temp,i,j;
cout<<"enter the element of the array";
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<selection(a,i,j,n,temp);

for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
