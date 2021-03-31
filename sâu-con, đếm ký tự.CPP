#include<stdio.h>
#include<string.h>

int max(int x, int y)
{
	if (x>y)
		return x; 
	return y;
}

int thang(char X[101], char Y[101])
{
	int A[101][101],i,j;
	int a=strlen(X); 
	int b=strlen(Y); 
	for (i=0; i<a; i++)
		A[i][0]=0;
	for (j=0; j<b; j++)
		A[0][j]=0;
	for (i=1; i<=a; i++)
		for (j=1; j<=b; j++)
		{
			if (X[i-1]==Y[j-1])
				A[i][j]=A[i-1][j-1]+1;
			else
				A[i][j]= max(A[i-1][j],A[i][j-1]);
		}
	return A[a][b];
}

void main()
{
	char X[101]; 
	char Y[101]; 
	gets(X);
	gets(Y);
	int t=thang(X,Y); printf("%d",t);
}




















