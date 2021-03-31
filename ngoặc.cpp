#include<stdio.h>
#include<string.h>

int check(char s[])
{
	int o=0, max=0;
	int n=strlen(s);
	for(int i=0; i<n; i++)
	{
		if(s[i]=='(')
			o++;
		else 
		{
			if(o>max)
				max=o;						
			o--;	
			if(o<0)
				return -1;
		}
	}
	if(o<0)
		return -1;
	else return max;
}

void main()
{
	char s[101];
	gets(s);
	int t=check(s);
	printf("%d", t);
}