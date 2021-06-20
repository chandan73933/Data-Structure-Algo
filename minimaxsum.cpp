#include<iostream>
using namespace std;
int main()
{
int temp;
int arr[5];
for(int i=0;i<5;i++)
{
cin>>arr[i];
}
for(int i=0;i<5;i++)
{
	for(int j=i+1;j<5;j++)
	{
	if(arr[i]>arr[j])
	{
	temp= arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
	}
	}
	
}
int i,sum=0,sum1=0;
for(int i=0;i<5-1;i++)
{
sum=sum+arr[i];
}
cout<<sum<<endl;
for(int i=1;i<5;i++)
{
sum1=sum1+arr[i];
}
cout<<sum1;
}

