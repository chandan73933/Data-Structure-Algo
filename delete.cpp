#include<iostream>
using namespace std;
int delet(int arr[],int n,int elem)
{
	int i,j;
	for(i=0;i<n;i++)
		if(arr[i]==elem)
		break;
	if(i==n)
	
	return n;
	
	for(int j=i;j<n-1;j++)
	{
		arr[j]=arr[j+1];
		return (n-1);
		
		}
		
int main()
{
int arr[10],n,elem,i;
cin>>n;
for(i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"enter the element to delete\n ";
cin>>elem;

cout<<delet(arr,n,elem);
}

