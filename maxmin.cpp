#include<iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	int arr[n];
	int max=0;
	int min=0;
	for(i=0;i<n;i++)
	cin>>arr[i];
	for(i=0;i<n;i++)
	if(arr[i]>max)
	{
	  max=arr[i];
	  
	  }
	  for(i=0;i<n;i++)
	  if(arr[i]<min){
	  	min=arr[i];
	  }
	  
	  
cout<<"\n max is:-  "<<max;
cout<<"\n min is:-  "<<min;

}
