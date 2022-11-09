//打印100-200之间的素数
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	//是素数返回1，不是素数返回0
	 int j=0;
	 for(j=2;j<=sqrt(n);j++)
	 {
	 	if(n%j==0)//2—n-1的范围内有能将n整除的 
	 	{
	 		return 0;//不是素数返回0 
		 }
	 }//拿2到n-1的数去试除 
	 return 1;
}
int main()
{
	int i=0;
	int count =0;
	for(i=101;i<=200;i+=2)
	{
		//判断i是否为素数
		if(is_prime(i) ==1)
		{
			count+=1;
			printf("%d ",i);
		}
		
	}
	printf("count=%d",count);
	return 0;
 } 
