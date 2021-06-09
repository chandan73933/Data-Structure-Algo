// program to insert element at any position



#include<iostream>
using namespace std;
int insert(int arr[],int tot,int elem,int pos)
{
int i;
for(i=tot; i>=pos; i--)
        arr[i] = arr[i-1];
    arr[i] = elem;
    tot++;
    cout<<"\nThe New Array is:\n";
    for(i=0; i<tot; i++)
    {
        cout<<arr[i]<<"  ";
        }
        return 0;
}
int main()
{
int arr[100],i,tot,elem,pos;
cout<<"enter the size";
cin>>tot;
cout<<"enter the element of the array\n ";
for(i=0;i<tot;i++)
{
cin>>arr[i];
}
cout<<"enter the elem \n";
cin>>elem;
cout<<"enter the position of the element\n ";
cin>>pos;
cout<<insert(arr,tot,elem,pos);
    
    }
