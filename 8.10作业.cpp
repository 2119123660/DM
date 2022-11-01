#include<stdio.h>
#include<string.h>
int main()
{
	int a;     //定义一个变量 
	char b[99999];   //定义一个字符串，范围为99999 
	gets(b);//读取字符串b 
	a=strlen(b);//计算b字符串的长度，然后将这个数赋给a 
	printf("%d\n",a);//输出a 
	return 0;
}
