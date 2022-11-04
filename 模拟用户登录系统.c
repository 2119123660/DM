#include<stdio.h>
#include<string.h>
int main()
{
	char password[20]={0};
	int i=0;
	for(i=0;i<3;i++)
	{
		printf("请输入密码");
		scanf("%s",&password);
		if(strcmp(password,"123456")==0)//等号不能用来比较两个字符串是否相等
		//应该使用库函数 strcmp
		{
			printf("登录成功\n");
			break;
		}
		else{
			printf("密码错误\n"); 
		}
	}
	if(i==3)
	{
		printf("三次密码均错误，退出程序"); 
	}
}
