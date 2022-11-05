#include<stdio.h>
int main()
{
	int year=0;
	int count=0; 
	for(year=1000;year<=2000;year++)
	{
		//判断year是否为闰年
		if(year%4==0&&year%100!=0) //能被4整除并且不能被100整除
		{
			count++;
			printf("%d ",year);
		}
		else if(year%400==0)
		{
			count++;
			printf("%d ",year);//能被400整除
		}
	}
	printf("\n%d",count);
}
