#include<iostream>
using namespace std;
int bubble(int a[],int i,int temp,int n,int count)
{
while(count<n)
{
	for(int i=0;i<n-count;i++)
	{
		if(a[i]>a[i+1])
		{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		}
	}
	count++;
}
return 0;
}
int main()
{
int n,temp,i;
cin>>n;
int count=0;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<bubble(a,i,temp,n,count);
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
