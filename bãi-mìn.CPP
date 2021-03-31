#include<stdio.h>
#include<iostream.h>
void nhaP(int A[][102], int &m, int &n)
{
	cin>>m>>n;
	for(int i=1; i<m+1; i++)
		for(int j=1; j<n+1; j++)
			cin>>A[i][j];
}
void miN(int A[][102], int m, int n)
{
	int i, j, t=0;
	int X[8]={-1, 0, 1,-1, 1,-1, 0, 1};
	int Y[8]={-1,-1,-1, 0, 0, 1, 1, 1};
	for(int i=1; i<m+1; i++)
	{
		for(j=1; j<n+1; j++)
			if(A[i][j]==1)
				A[i][j]=9;
	}
	for(i=1; i<m+1; i++)
	{
		for(j=1; j<n+1; j++)
			if(A[i][j]==0)
			{
				t=0;
				for(int k=0; k<8; k++)
					t=t+A[i+B[k]][j+C[k]];
				A[i][j]=t/9;
			}
	}


}

void xuaT(int A[][102], int m, int n)
{
	for(int i=1; i<m+1; i++)
	{
		for(int j=1; j<n+1; j++)
			cout<<A[i][j];
		cout<<"\n";
	}
}
void main()
{
	int A[102][102]={0};
	int m, n;
	nhaP(A, m, n);
	miN(A, m, n);
	xuaT(A, m, n);
}