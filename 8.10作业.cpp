#include<stdio.h>
#include<string.h>
int main()
{
	int a;     //����һ������ 
	char b[99999];   //����һ���ַ�������ΧΪ99999 
	gets(b);//��ȡ�ַ���b 
	a=strlen(b);//����b�ַ����ĳ��ȣ�Ȼ�����������a 
	printf("%d\n",a);//���a 
	return 0;
}
