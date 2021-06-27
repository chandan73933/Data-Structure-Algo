#include<iostream>
using namespace std;
int stack[100], top=-1, n=5, x, res;

void push(int x)
{
if(top==n-1)
cout<<"stack overflow";
else
{
top++;
stack[top]=x;
}
}

void pop()
{
if(top<=-1)
cout<<"\n stack underflow";
else
{
cout<<"\n The poped item is:-"<<stack[top];
top--;
}
}

void display()
{
for(int i=0;i<n;i++)
{
cout<<stack[i]<<" ";
}
cout<<"\n index of the top is"<<top;
}

int main()
{
int op;
cout<<"\n enter 1 for push";
cout<<"\n enter 2 for pop";
cout<<"\n enter 3 for display";
cout<<"\n enter 4 for exit";
do{
cout<<"\n enter your option:---";
cin>>op;

switch(op)
{
case 1:
{
cout<<"enter the no you want to push:~~~";
cin>>x;
push(x);
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4: 
{
cout<<"Exit"<<endl;
break;
}
default:
{
cout<<"enter the valid one";
}
}
}
while(op!=4);
return 0;
}



