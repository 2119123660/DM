#include <stdio.h>
#define N 15
int main()
{
    int a[N]={1,2,3,4,5,6,7,8,9,11,12,13,16,19,21};
    int b;
	int len=sizeof(a)/sizeof(a[0]);
	int left=0;//左下标 
	int right=len-1;
	scanf("%d",&b);
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(a[mid]>b)
		{
			right=mid-1;
		}
		else if(a[mid]<b)
		{
			left=mid+1;
		}
		else{
			printf("num=%d",mid+1);
			break;
		}
	}
	if(left>right)
	{
		printf("No");
	}
    return 0;
}
/*int main()
{
	int a[N]={1,2,3,4,5,6,7,8,9,11,12,13,16,19,21};
	int sz=sizeof(a)/sizeof(a[0]);
	int left=0;//左下标
	int right =sz-1;
	int k=7;
	scanf("%d",&k);
	while(left<=right)
	{
	    int mid =(left+right)/2;
	    if(a[mid]>k)
	    {
		    right = mid-1;
	    }
	    else if(a[mid]<k)
	    {  
		    left = mid+1;
	    }
	    else{
		    printf("num=%d",mid+1);
		    break;
	    }
	}
	if(left>right)
	{
		printf("No");
	}
	return 0;
}*/
