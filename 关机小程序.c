#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   
    char input[20]={0};
	//shutdown -s -t 60
    //system()-执行系统命令的
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑将在一分钟后关机，如果输入：我是笨蛋，就取消关机\n");
    printf("请输入\n");
    scanf("%s",input);
    if(strcmp(input,"我是笨蛋")==0)//比较两个字符串
	//strcmp专门用来比较字符串 
	{
		system("shutdown -a");//取消关机 
	}
	else
	{
		goto again;
		
	}
	return 0;
}
