#include<iostream>
using namespace std;
int partation(int a[],int l,int h,int p)
{
	
	int temp[h-l+1];
	int index=0;
	for(int i=l;i<=h;i++)
	{
		if(a[i]<=a[p])
		{
		temp[index]=a[i];
		index++;
		}
	}
	for(int i=l;i<=h;i++)
	{
		if(a[i]>a[p])
		{
		temp[index]=a[i];
		index++;
		}
	}
	for(int i=l;i<=h;i++)
	{
		a[i]=temp[i-l];
	}
	
return 0;
}
int main()

{	
	int l,h,p,n;
	cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
        cin>>a[i];
        }
	cout<<partation(a,0,6,6);
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}

