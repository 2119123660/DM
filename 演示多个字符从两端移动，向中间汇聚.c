#include<stdio.h>
#include<string.h>
#include<windows.h>//Sleep������ͷ�ļ� 
#include<stdlib.h>//system������ͷ�ļ� 
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
    	//��Ϣһ��
		Sleep(1000);
		system("cls");//ִ��ϵͳ�����һ������ cls�����Ļ 
    	left++;
    	right--;
	}
	
    
	return 0;
}
