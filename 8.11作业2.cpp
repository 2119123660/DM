#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];//�ַ��ͱ���a 
    gets(a);//��ȡ�ַ��� 
    for(int i=6;i<strlen(a);i=i+7)//�������ͱ���i,i��ΧС��a�ĳ��ȣ� 
    printf("%c",a[i]);
    return 0;
}
