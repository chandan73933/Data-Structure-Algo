#include<iostream>
using namespace std;
void frequency(int a[], int n)
{
int max=0;
    for (int i=0; i < n; i++)
    {
    if(a[i]>max)
    {
    max=a[i];
    }
    }
    int count =0;
    for (int i=0; i < n; i++)
    {
          if(a[i]==max)
          {
          count++;
          }
    }
    cout<<count;  
}
int main() 
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	cin>>a[i];
	}
frequency(a, n);
return 0;
}
