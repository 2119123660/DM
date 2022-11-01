#include<stdio.h>
#include<string.h>
int main()
{
	char a[99999];//字符型变量a 
	int b;//整型变量b 
	int c;//整型变量c 
	gets(a);//读取字符串 
	b=strlen(a);//读取a的字符串长度并且赋给b 
	int i=1;//整型变量i 
	for(i=1;7*i<=b;i++){//i的初始赋值为1，b的范围为小于等于7*i，i每轮+1 
		c=7*i;//将7*i赋给c 
		printf("%c",a[c-1]);输出第c-1位的字符 
	}
	return 0;
}
//数组是从下标0开始算第一位，第七位实际上是a[6]

