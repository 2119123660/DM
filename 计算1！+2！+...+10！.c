#include<stdio.h>
int main()
{
	int i,m=1,sum=0;
	for(i=1;i<=10;i++)
	{
		m*=i;
		sum+=m;
	}
	printf("%d",sum);
	return 0;
}
