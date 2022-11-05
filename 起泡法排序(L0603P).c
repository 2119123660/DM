#include<stdio.h>
void bubble_sort(int arr[])//本质为指针，写成int*arr 
{
	 
	int i=0;
	for(i=0;i<10;i++)
	{
		int flag = 1;//假设这一趟要排序的数据已经有序 
		int j=0;
		for(j=0;j<10-1-i;j++)//每一对排序 
		{
			int tmp=0;
			if(arr[j]>arr[j+1])
			{
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag = 0;//本趟排序的数据不完全有序 
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
		scanf("%d",&arr[i]);//输入要排序的10个数字 
	}
	bubble_sort(arr);//冒泡函数 
	for(i=0;i<10;i++)
	{
		printf("%5d",arr[i]); 
	}
}
