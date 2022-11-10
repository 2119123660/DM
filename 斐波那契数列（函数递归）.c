/*描述第n(n!=0)个斐波那契数列
Fib(n)=Fib(n-1)+Fib(n-2)*/
#include<stdio.h>
int Fib(int n)
{
	if(n<=2)
	return 1;
	else
	return Fib(n-1)+Fib(n-2);
}
int main()
{
	int n=0;
	scanf("%d",&n);
	//TDD-测试驱动开发 
	long long int ret=Fib(n);
	printf("ret=%lld\n",ret);
	return 0;
}
