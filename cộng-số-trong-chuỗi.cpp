#include<stdio.h>
#include<iostream.h>
#include<string.h>
#define M 100

void main() 
{ 
	char c[M]; 
	int i=0,j,tong=0,tam; 
	int t=strlen(c);
	gets(c); 
	while(i<t) 
		if(c[i]<='9' && c[i]>='0') 
		{ 
			j=i; 
			tam=0;            
			while(j<= t-1 && (c[j]<='9' && c[j]>='0')) 
			{ 
				tam=10*tam+(int)c[j]-48; 
				j++; 
			} 
			tong+=tam; 
			i=j; 
		} 
		else i++; 
	printf("%d",tong);
}