//�ú����ݹ�ķ�����ӡĳ������ÿһλ�� 
#include<stdio.h>
void print(int n)
{
	if(n>9)
	{
		print(n/10);
	}
	printf("%d ",n%10); 
}
int main()
{
	unsigned int num=0;
	scanf("%d",&num);
	//�ݹ�
	print(num);
	//print(123)4
	//print(12)3
	//print(1)2
	return 0;
}
