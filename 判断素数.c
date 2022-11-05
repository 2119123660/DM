#include<stdio.h>
#include<math.h>
int main()
{
	int i=0;
	int count =0;
	for(i=101;i<=200;i+=2)//判断i是否为素数 ，偶数一定不是素数 
	{
		//素数判断的规则—试除法
		//产生2~i-1的数 
		int j=0;//a和b中至少有一个数字<=开平方i 
		for(j=3;j<sqrt(i);j++)
		{
		    if(i%j==0)
		    {
		    	
				break;
		    }
		}
		if(j>sqrt(i))//当 
		{
			count++;
			printf("%d ",i);
		}
	}
	printf("\ncount=%d",count);
	return 0;
}
//素数求解的n中境界 

