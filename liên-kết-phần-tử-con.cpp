#include <stdio.h>
#include <iostream.h>
#define M 50

void quayLui(int A[M], int n, int k, int i, int j)
{
	for(j; j<n-k+i+1; j++)
	{
		A[i]=j+1;
		if(i==(k-1))
		{
			for(int tam=0; tam<k; tam++)
				cout << A[tam];
			cout<<" ";
		}
		else
			quayLui(A,n,k,i+1,j+1);
	}
}

void main()
{
	int n;
	cin>>n;
	int A[M];
	for (int t=1; t<=n; t++)
		quayLui(A, n, t, 0, 0);
}