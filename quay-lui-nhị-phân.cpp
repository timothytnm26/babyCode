#include<stdio.h>
#include<iostream.h>
#define M 100

void quaylui(int A[], int n, int i)
{
	for(int v=0; v<2; v++)
	{
		A[i]=v;
		if(i==(n-1))
		{
			for(int j=0; j<n; j++)
				cout<<A[j];
				cout<<" ";
		}
		else
			quaylui(A,n,i+1);
	}
}

void main()
{
	int n;
	cin>>n;
	int A[M];
	quaylui(A,n,0);
}