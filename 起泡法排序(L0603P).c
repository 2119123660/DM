#include<stdio.h>
void bubble_sort(int arr[])//����Ϊָ�룬д��int*arr 
{
	 
	int i=0;
	for(i=0;i<10;i++)
	{
		int flag = 1;//������һ��Ҫ����������Ѿ����� 
		int j=0;
		for(j=0;j<10-1-i;j++)//ÿһ������ 
		{
			int tmp=0;
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag = 0;//������������ݲ���ȫ���� 
			}
		}
		if(flag==1)
		{
			break;
		}
	}
}
int main()
{
	int i=0;
	int arr[10]={0};
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);//����Ҫ�����10������ 
	}
	bubble_sort(arr);//ð�ݺ��� 
	for(i=0;i<10;i++)
	{
		printf("%5d",arr[i]); 
	}
}
