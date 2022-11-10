//不创建临时变量求字符串长度
#include<stdio.h>
int my_strlen(char* str)
{
	if(*str!='\0')
	{
		return 1+my_strlen(str+1);
	}
	else
	{
		return 0;
	}
}
//my_strlen("bit")
//1+my_strlen("it");
//1+1+my_strlen("t")
//1+1+1+my_strlen(" ")
//1+1+1+0
int main()
{
	char arr[]="bit";
	//int len=strlen(arr);
	int len=my_strlen(arr);
	//数组传参传过去的不是整个数组，而是首元素的地址 
	printf("%d\n",len);
	return 0;
 } 
