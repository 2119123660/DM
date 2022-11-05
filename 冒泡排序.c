#include<stdio.h>
#include<string.h>
void bubble_sort(int arr[],int sz)
//本质为指针，也就是int*arr 
{
	int i=0;
	
	//int sz=sizeof(arr)/sizeof(arr[0]);//无法计算元素个数
	//传过来实际上是arr地址，sizeof实际上是计算指针的大小-4 
	for(i=0;i<sz-1;i++) 
	//每一趟冒泡排序 
	{
		int flag =1;//假设这一趟要排序的数据已经有序
		//没一个冒泡排序 
		int j=0;
		for(j=0;j<sz-1-i;j++)//确定一趟多少对 
		{
			if(arr[j]>arr[j+1])
			{
				int tmp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag = 0;//本趟排序的数据其实不完全有序 
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
	//对arr进行排序，排成升序
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//arr是数组，对arr进行传参
	//实际上传递过去的是数组arr首元素的地址 
	bubble_sort(arr,sz);//冒泡排序函数 
	
	for(i=0;i<sz-1;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
