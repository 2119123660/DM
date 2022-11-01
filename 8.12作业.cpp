#include<stdio.h>
#include<string.h>
int main()
{
    char a[99999];//字符型变量a 
    gets(a);//读取字符串a 
    int b=strlen(a);//读取字符串a的长度，将其赋给b 
    int i;//整型变量i 
    for(i=b-1;i>=0;i--){//i的初始赋值为b-1,i的范围为大于等于0，每次循环一次i减1 
    	printf("%c",a[i]);//输出第i个位置对应的字符 
    }
    return 0;
}
