#include<iostream>
using namespace std;
int main()
{
int n,m;
int a[100][100];
int b[100][100];
int c[100][100];
cout<<"enter th eelement of the array";
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
	
	cin>>a[i][j];
	}
}

cout<<"\n enter the element of array";
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
	
	cin>>b[i][j];
	}
}

cout<<"\n the add is";
for(int i=0;i<n;i++)
{
	for(int j=0;j<m;j++)
	{
	
	cout<<(c[i][j]=a[i][j]+b[i][j]);
	}
}

}
