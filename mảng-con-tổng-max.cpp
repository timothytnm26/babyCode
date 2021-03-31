#include<stdio.h>
#include<iostream.h>
#define M 1000

float tam( int A[M], int n, int i)
{
	float t=0, m=0;
	for(int j=i; j<n; j++)
		{
			t+=A[j];
			if (t>m)
				m=t;
		}
	return m;

}
void main()
{
	int A[M], n, i;
	float Tong=0;
	cin>>n;
	for(i=0; i<n; i++)
		cin>>A[i];
	float Max=0;
	for(i=0; i<n; i++)
		{
			Tong=tam(A, n, i);
			if (Tong>Max)
				Max=Tong;
		}
	printf("%.2f", Max);
}