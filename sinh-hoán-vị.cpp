#include<iostream.h>
#define M 20

void xuat(int A[M], int n) 
{
    for (int i = 1; i <= n; i++)
        cout << A[i];
    cout <<" ";
}
 
void Try(int A[M],int Bool[M], int n, int k) 
{
    for (int i = 1; i <= n; i++) 
	{
        //Ki?m tra n?u ph?n t? chua du?c ch?n th� s? d�nh d?u
        if (Bool[i]==0) 
		{
            A[k] = i; // Luu m?t ph?n t? v�o ho�n v?
            Bool[i] = 1;//��nh d?u d� d�ng
            if (k == n)//Ki?m tra n?u d� ch?a m?t ho�n v? th� xu?t
                xuat(A,n);
            else
                Try(A,Bool,n,k + 1);
            Bool[i] = 0;
        }
	}
}
 
void main() 
{
	int n;
	int Bool[M] = { 0 };
	int A[M];
    cin >> n;
    Try(A,Bool,n,1);
}
