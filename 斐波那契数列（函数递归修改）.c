//�����ݹ飬쳲��������У��޸ģ�
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
	//TDD-������������ 
	int ret=Fib(n);
	printf("ret=%d\n",ret);
	return 0;
}
