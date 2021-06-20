#include<iostream>
using namespace std;
int main()
{
int r,c;
cin>>r>>c;
int mat[r][c];
for(int i=0;i<r;i++)
{
	for(int j=0;j<c;j++)
	{
	cin>>mat[i][j];
	}
	}
	for(int i=0;i<c;i++)
	{cout<<mat[0][i];
	}
	for(int i=1;i<r-1;i++)
	{cout<<mat[i][c-1];
	}
	for(int i=c-1;i>=0;i--)
	{cout<<mat[r-1][i];
	}
	for(int i=r-2;i>=1;i--)
	{cout<<mat[i][0];
	}
}
