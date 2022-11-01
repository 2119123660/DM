#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	long long a=1;
	long long b=0;
	int i=1;
	while(i<=N){
		a=a*i;
		i++;
		b=b+a;
	}
	printf("%lld",b);
	return 0;
}
