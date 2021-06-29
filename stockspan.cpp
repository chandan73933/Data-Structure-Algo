#include<iostream>
using namespace std;
void span(int stock[],int n)
{
for(int i=0;i<n;i++)
{
int span=1;
for(int j=i-1;j>=0;j--)
{
	if(stock[j]<=stock[i])
	{
	span++;
	}
	else
	break;
}
	cout<<span<<" ";
}
}
int main()
{
int n;
cin>>n;
int stock[n];
for(int i=0;i<n;i++)
{
cin>>stock[i];
}
span(stock,n);
}
