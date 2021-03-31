#include<stdio.h>
#include<string.h>
#define SIZE 100
void Nhap( char S[], char S1[]);
void XuLi(char S1[], char L[],char S[]);
void Xuat(char S[], char S1[], char L[]);
void main()
{
	char S[SIZE],S1[SIZE],L[SIZE];
	Nhap(S,S1);
	XuLi(S1,L,S);
	Xuat(S,S1,L);
}
void XuLi(char S1[], char L[],char S[])
{
	int nS=strlen(S);
	L[nS]=1+48;
	int i;
	for(i=nS-1;i>=0;i--)
	{
		L[i]=1+48;
		for(int j=nS;j>i;j--)
		{
			if(S1[i]<S1[j] && L[i]<L[j]+1)
				L[i]=L[j]+1;
		}
	}

}
void Xuat(char S[], char S1[], char L[])
{
	int nS=strlen(S);
	int i=0;
	while(L[i]>1)
	{
		int tam=L[i]-1;
		int j;
		for(j=i+1;j<=nS;j++)
		{
			if(L[j]==tam)
			{
				printf("%c",S1[j]);
				break;
			}
		}
		i=j;
	}
}
void Nhap( char S[], char S1[])
{
	gets(S);
	int nS=strlen(S);
	S1[0]=-99999+48;
	S1[1]='\0';
	strcat(S1,S);
}