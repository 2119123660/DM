#include<stdio.h>
int main()
{
	int N;
	scanf("%lld",&N);
	long long a=1;
	int i=1;
	long long c=0;
	for(i=1;i<=N;i++){
		a=a*i;
		c=c+a;
	}
	printf("S=%lld",c);
	return 0;
}
