//函数递归，斐波那契数列（修改）
#include<stdio.h>
int Fib(int n)
{
	int a=1;
	int b=1;
	int c=1;
	while(n>2)
	{
		c=a+b;
		a=b;
		b=c;
		n--;
	}
	return c;
}
int main()
{
	int n=0;
	scanf("%d",&n);
	//TDD-测试驱动开发 
	int ret=Fib(n);
	printf("ret=%d\n",ret);
	return 0;
}
