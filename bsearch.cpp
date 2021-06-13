#include<iostream>
using namespace std;
int bsearch(int arr[],int n,int key)
{
int s=0;
int e=n;
while(s<=e)
{
int mid=(s+e)/2;
if(arr[mid]==key)
{
return mid;
}
else if(arr[mid]>key)
{
e=mid-1;
}
else{
s=mid+1;
}
}
return -1;
}

	int main()
	{
	int n;
	cout<<"enter the size";
	cin>>n;
	int arr[n];
	cout<<"\n enter the array";
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
	}
	int key;
	cout<<"\n enter the key";
	cin>>key;
	cout<<bsearch(arr,n,key);
	return 0;
	}
