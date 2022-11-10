//ÇónµÄ½×³Ë£¨µÝ¹é£©
#include<stdio.h>
int Facl(int n)
{
	if(n<=1)
	return 1;
	else
	return n*Facl(n-1);
}
int main()
{
	int n=0;
	int ret=0;
	scanf("%d",&n);
	ret=Facl(n);
	printf("%d\n",ret);
	return 0;
}
