#include<stdio.h>
#include<string.h>
#include<windows.h>//Sleep函数的头文件 
#include<stdlib.h>//system函数的头文件 
int main()
{
	//arr []="abc";
	//{a b c \0}
	// 0 1 2 3
	//4-2
	char arr1[]="welcome to bit !!!!!!";
	char arr2[]="#####################";
	int left =0;
	int right=strlen(arr1)-1;
	//int right =sizeof(arr1)/arr(arr1[0])-2;
    while(left<=right)
    {
    	arr2[left]=arr1[left];
    	arr2[right]=arr1[right];
    	printf("%s\n",arr2);
    	//休息一秒
		Sleep(1000);
		system("cls");//执行系统命令的一个函数 cls清空屏幕 
    	left++;
    	right--;
	}
	
    
	return 0;
}
