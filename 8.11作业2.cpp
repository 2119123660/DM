#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];//字符型变量a 
    gets(a);//读取字符串 
    for(int i=6;i<strlen(a);i=i+7)//定义整型变量i,i范围小于a的长度， 
    printf("%c",a[i]);
    return 0;
}
