
//ʮλ��Ϊ9����10��9 
#include<stdio.h>
int main()
{
	int i=0;
	int count;
	for(i=0;i<=100;i++)
	{
		if(i%10==9||i/10==9)//��λ��Ϊ9����10��9
		    count++;
	}
	printf("count=%d\n",count);
	return 0;
}
