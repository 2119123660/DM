#include<stdio.h>
int main()
{
	int i=0;
	int j=0;
	for(i=1;i<=9;i++)//��ӡһ��
	{
		 for(j=1;j<=i;j++)//��ӡһ�� 
		 {
		 	printf("%d*%d=%-2d ",i,j,i*j);//-2d����� 
		 }
		 printf("\n");
	}
	return 0;
}
