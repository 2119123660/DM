#include<stdio.h>
#include<math.h>
int main()
{
	int i=0;
	int count =0;
	for(i=101;i<=200;i+=2)//�ж�i�Ƿ�Ϊ���� ��ż��һ���������� 
	{
		//�����жϵĹ����Գ���
		//����2~i-1���� 
		int j=0;//a��b��������һ������<=��ƽ��i 
		for(j=3;j<sqrt(i);j++)
		{
		    if(i%j==0)
		    {
		    	
				break;
		    }
		}
		if(j>sqrt(i))//�� 
		{
			count++;
			printf("%d ",i);
		}
	}
	printf("\ncount=%d",count);
	return 0;
}
//��������n�о��� 

