#include<iostream>
using namespace std;
int sz(int a[],int n)
{
for(int i=0;i<n;i++)
	{
	if(a[i]%2==0 &&)
	{
	return a[i];
	}
	}
	return 0;
}
int main()
{
int n,size;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
	cin>>a[i];
	}
	size=sizeof(a)/sizeof(a[0]);
	cout<<"\n"<<size;
	cout<<"\n"<<sz(a,n);
	
}
