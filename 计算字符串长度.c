#include<stdio.h>
int my_strlen(char* str)
{
	int count=0;
	while(*str!='\0')//ͨ��ָ��str�ҵ���ַ
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[]="bit";
	//int len=strlen(arr);
	int len=my_strlen(arr);
	//���鴫�δ���ȥ�Ĳ����������飬������Ԫ�صĵ�ַ 
	printf("%d\n",len);
	return 0;
 } 
