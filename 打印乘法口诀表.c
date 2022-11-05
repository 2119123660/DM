#include<stdio.h>
int main()
{
	int i=0;
	int j=0;
	for(i=1;i<=9;i++)//打印一行
	{
		 for(j=1;j<=i;j++)//打印一列 
		 {
		 	printf("%d*%d=%-2d ",i,j,i*j);//-2d左对齐 
		 }
		 printf("\n");
	}
	return 0;
}
