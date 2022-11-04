#include<stdio.h>
/*int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int k=7;//写一个代码，在arr数组(有序）中找到7
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for (i=0;i<sz;i++)
	{
		if(k==arr[i])
		{
			printf("找到了，下标是:%d\n",i);
			break;
		}
	}
	if(i==sz)
	{
		printf("找不到\n");
	}
	return 0;
}*/
//折半查找算法&二分查找算法 
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,11,12,13,16,19,21};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int left=0;//左下标
	int right =sz-1;
	int k=7;
	scanf("%d",&k);
	while(left<=right)
	{
	    int mid =(left+right)/2;
	    if(arr[mid]>k)
	    {
		    right = mid-1;
	    }
	    else if(arr[mid]<k)
	    {  
		    left = mid+1;
	    }
	    else{
		    printf("找到了，下标是%d",mid);
		    break;
	    }
	}
	if(left>right)
	{
		printf("找不到");
	}
	return 0;
}
