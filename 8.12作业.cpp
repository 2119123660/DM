#include<stdio.h>
#include<string.h>
int main()
{
    char a[99999];//�ַ��ͱ���a 
    gets(a);//��ȡ�ַ���a 
    int b=strlen(a);//��ȡ�ַ���a�ĳ��ȣ����丳��b 
    int i;//���ͱ���i 
    for(i=b-1;i>=0;i--){//i�ĳ�ʼ��ֵΪb-1,i�ķ�ΧΪ���ڵ���0��ÿ��ѭ��һ��i��1 
    	printf("%c",a[i]);//�����i��λ�ö�Ӧ���ַ� 
    }
    return 0;
}
