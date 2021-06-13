#include<iostream>
using namespace std;
int main()
{
int n,temp,i,j;
cin>>n;
int a[n];
cout<<"\n enter th eelement of the array";
for(i=0;i<n;i++)
{
cin>>a[i];
}
cout<<"\n the element of the arrry is";
for(i=0;i<n;i++)
{
cout<<"\n"<<a[i];
}
	
	j=i-1;
	i=0;
	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	cout<<"\n reverse is:-";
	for(i=0;i<n;i++)
	{
	cout<<"\n "<<a[i];
	}
	
}
