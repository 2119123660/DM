//��ӡ100-200֮�������
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	//����������1��������������0
	 int j=0;
	 for(j=2;j<=sqrt(n);j++)
	 {
	 	if(n%j==0)//2��n-1�ķ�Χ�����ܽ�n������ 
	 	{
	 		return 0;//������������0 
		 }
	 }//��2��n-1����ȥ�Գ� 
	 return 1;
}
int main()
{
	int i=0;
	int count =0;
	for(i=101;i<=200;i+=2)
	{
		//�ж�i�Ƿ�Ϊ����
		if(is_prime(i) ==1)
		{
			count+=1;
			printf("%d ",i);
		}
		
	}
	printf("count=%d",count);
	return 0;
 } 
