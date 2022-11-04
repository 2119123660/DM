#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,b=1;
    int sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    	b*=i;
	}
	printf("%d",b);
	return 0;
	
}
