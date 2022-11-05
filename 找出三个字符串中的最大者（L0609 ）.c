#include<stdio.h>
int main()
{
	char a[101],b[101],c[101];
	char d[999];
	gets(a);
	gets(b);
	gets(c);
	strcpy(d,a);
	if(strcmp(d,b)<0)
	{
		strcpy(d,b);
	}
	if(strcmp(d,c)<0)
	{
		strcpy(d,c);
	}
	printf("%s",d);
	return 0;
}
