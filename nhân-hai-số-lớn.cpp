#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 100
#define MAXSIZE 10000
void nhap(int &a,int &b,char S[],char R[]);
void insert(char a[],int x,int y,char b);
void sum(char Q[],char K[]);
void nhan(char S[], char x,int y,char K[]);
void tich(char S[],char R[],char Q[]);
void main()
{
	int a,b;
	char S[SIZE]={'\0'}, R[SIZE]={'\0'};
	char Q[MAXSIZE]={'\0'};
	nhap(a,b,S,R);
	tich(S,R,Q);
	puts(Q);
}
void nhap(int &a,int &b,char S[],char R[])
{
	scanf("%d%d",&a,&b);
	if(a==0) S[0]='0';
	else
	{
		int i=0;
		while(a>0)
		{
			S[i++]=(char)(a%10+48);
			a=a/10;
		}
		S[i]='\0';
	}
	if(b==0) R[0]='0';
	else
	{
		int i=0;
		while(b>0)
		{
			R[i++]=(char)(b%10+48);
			b=b/10;
		}
		R[i]='\0';
	}
	strrev(S);
	strrev(R);
}
void insert(char a[],int x,int y,char b)
{
	for(int i=x;i<y;i++)
	{
		a[i]=b;
	}
}
void sum(char Q[],char K[])
{
	int nq=strlen(Q);
	int nk=strlen(K);
	strrev(Q);
	strrev(K);
	if(nq<nk) insert(Q,nq,nk,'0');
	if(nq<nk) insert(K,nk,nq,'0');
	int nc=strlen(Q);
	int tam=0;
	char c[10000]={'\0'};
	for(int i=0;i<nc;i++)
	{
		int t=(Q[i]-'0')+(K[i]-'0')+tam;
		c[i]=(char)(t%10+48);
		tam=t/10;
	}
	if (tam!=0) c[nc++]=(char)(tam+48);
	c[nc]='\0';
	strcpy(Q,c);
}
void nhan(char S[], char x,int y,char K[])
{
	int ns=strlen(S);
	int tam=0;
	for(int j=0;j<y;j++)
	{
		K[j]='0';
	}
	for(int i=ns-1;i>=0;i--)
	{
		int t=(x-'0')*(S[i]-'0')+tam;
		K[y++]=(char)(t%10+48);
		tam=t/10;
	}
	if (tam!=0) K[y++]=(char)(tam+48);
	K[y]='\0';
	strrev(K);
}
void tich(char S[],char R[],char Q[])
{
	if (strlen(S)<strlen(R)) 
	{
		char tam[MAXSIZE]={'\0'};
		strcpy(tam,S);
		S=R;
		R=tam;
	}
	int ns=strlen(S);
	int nr=strlen(R);
	int j=0;
	for (int i=nr-1;i>=0;i--)
	{
		char K[MAXSIZE]={'\0'};
		nhan(S,R[i],j++,K);
		sum(Q,K);
		strrev(Q);
	}
}