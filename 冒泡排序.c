#include<stdio.h>
#include<string.h>
void bubble_sort(int arr[],int sz)
//����Ϊָ�룬Ҳ����int*arr 
{
	int i=0;
	
	//int sz=sizeof(arr)/sizeof(arr[0]);//�޷�����Ԫ�ظ���
	//������ʵ������arr��ַ��sizeofʵ�����Ǽ���ָ��Ĵ�С-4 
	for(i=0;i<sz-1;i++) 
	//ÿһ��ð������ 
	{
		int flag =1;//������һ��Ҫ����������Ѿ�����
		//ûһ��ð������ 
		int j=0;
		for(j=0;j<sz-1-i;j++)//ȷ��һ�˶��ٶ� 
		{
			if(arr[j]>arr[j+1])
			{
				int tmp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
				flag = 0;//���������������ʵ����ȫ���� 
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
	//��arr���������ų�����
	int arr[]={9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	//arr�����飬��arr���д���
	//ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ 
	bubble_sort(arr,sz);//ð�������� 
	
	for(i=0;i<sz-1;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
