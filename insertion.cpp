#include<iostream>
using namespace std;
int insertion(int a[],int current,int i,int j,int n)
{
for(int i=0;i<n;i++)
{
        current=a[i];
	j=i-1;
	while(a[j]>current && j>=0)
	{
	a[j+1]=a[j];
	j--;
	}
	a[j+1]	=current;
}
return 0;
}
int main()
{
int n,i,j;
int current;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
cout<<insertion(a,current,i,j,n);
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
