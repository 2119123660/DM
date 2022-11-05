#include<stdio.h>
#include<stdlib.h>//运用rand所需的头文件 
#include<time.h>//time函数所需的头文件 
void menu()
{
	printf("***************************\n");
    printf("***   1.play   0.exit   ***\n");
    printf("***************************\n");
}
//rand 的范围为0- RAND_MAX(32767)之间 
void game()//函数的返回类型为void 
{
	char a;
	int guess;
	int ret=0;         
	ret = rand()%100;//1.生成1-100随机数,%100后生成的就是 
	while(1)//2.猜数字 
	{
		printf("请猜数字:>");
		scanf("%d",&guess);
		if(guess>ret)
		{
			printf("猜大了\n"); 
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("\a恭喜你，猜对了\n");
			break; 
		}
		
	}
	//printf("%d\n",ret);
}
int main()
{
	char name;
	int input=0;
	srand((unsigned int)time(NULL));//将返回的值强制类型转换为unsigned int 
	//在使用rand之前需要使用srand
	// srand里面使用一个时间戳来设置随机数的生成起始点 
	//time_t*timer
	do
	{
		
		menu();//调用函数打印菜单
		printf("亲爱的玩家，请选择>:");//选择是否玩游戏 
		scanf("%d",&input);//用户输出数字，存到input
		switch(input)
		{
			case 1://玩猜数字游戏 
				game();
				
				break;
			case 0://退出游戏 
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;
		}
		
	}while(input);
	return 0;
}
