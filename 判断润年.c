#include<stdio.h>
int main()
{
	int year=0;
	int count=0; 
	for(year=1000;year<=2000;year++)
	{
		//�ж�year�Ƿ�Ϊ����
		if(year%4==0&&year%100!=0) //�ܱ�4�������Ҳ��ܱ�100����
		{
			count++;
			printf("%d ",year);
		}
		else if(year%400==0)
		{
			count++;
			printf("%d ",year);//�ܱ�400����
		}
	}
	printf("\n%d",count);
}
