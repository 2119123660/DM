/*������n(n!=0)��쳲���������
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
	//TDD-������������ 
	long long int ret=Fib(n);
	printf("ret=%lld\n",ret);
	return 0;
}
