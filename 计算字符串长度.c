#include<stdio.h>
int my_strlen(char* str)
{
	int count=0;
	while(*str!='\0')//通过指针str找到地址
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
	//数组传参传过去的不是整个数组，而是首元素的地址 
	printf("%d\n",len);
	return 0;
 } 
