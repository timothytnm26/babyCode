#include<stdio.h>

void input(int &n, int &k)
{
	scanf("%d %d", &n, &k);
}

void thang(int &n, int k)
{
	int a = n << (32-k);
	int b = n >> k;
	if (n < 0)
	{
		a = a + (0x1 << (32-k)) - 1;
		n = b & a;
	}
	else
	{
		n = b + a;
	}
}

void main()
{
	int n, k;
	input(n, k);
	thang(n, k);
	printf("%d", n);
}
