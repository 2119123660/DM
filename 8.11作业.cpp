#include<stdio.h>
#include<string.h>
int main()
{
	char a[99999];//�ַ��ͱ���a 
	int b;//���ͱ���b 
	int c;//���ͱ���c 
	gets(a);//��ȡ�ַ��� 
	b=strlen(a);//��ȡa���ַ������Ȳ��Ҹ���b 
	int i=1;//���ͱ���i 
	for(i=1;7*i<=b;i++){//i�ĳ�ʼ��ֵΪ1��b�ķ�ΧΪС�ڵ���7*i��iÿ��+1 
		c=7*i;//��7*i����c 
		printf("%c",a[c-1]);�����c-1λ���ַ� 
	}
	return 0;
}
//�����Ǵ��±�0��ʼ���һλ������λʵ������a[6]

