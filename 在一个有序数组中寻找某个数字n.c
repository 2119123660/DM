#include<stdio.h>
/*int main()
{
	int arr[]={1,2,3,4,5,6,7};
	int k=7;//дһ�����룬��arr����(�������ҵ�7
	int i=0;
	int sz=sizeof(arr)/sizeof(arr[0]);
	for (i=0;i<sz;i++)
	{
		if(k==arr[i])
		{
			printf("�ҵ��ˣ��±���:%d\n",i);
			break;
		}
	}
	if(i==sz)
	{
		printf("�Ҳ���\n");
	}
	return 0;
}*/
//�۰�����㷨&���ֲ����㷨 
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,11,12,13,16,19,21};
	int sz=sizeof(arr)/sizeof(arr[0]);
	int left=0;//���±�
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
		    printf("�ҵ��ˣ��±���%d",mid);
		    break;
	    }
	}
	if(left>right)
	{
		printf("�Ҳ���");
	}
	return 0;
}
