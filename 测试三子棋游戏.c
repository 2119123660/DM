#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include"game.h"
void name()
{
    int i=0,len;
	char name[100];
	printf("请输入你的昵称\n");
	gets(name);
	len =strlen(name);
	printf("亲爱的");
    for(i=0;i<len;i++)
	{
		printf("%c",name[i]);
	}
	printf("\n");
	printf("请选择是否开始游戏:>\n");
}
void menu()
{
	printf("********************************\n");
	printf("****   1.play      0.exit   ****\n");
	printf("********************************\n");
}
//游戏的整个实现
void game()
{
	char ret={0};
	//数组——存放走出的棋盘信息
	char board[ROW][COL]={0};//全部空格
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	DisplayBoard(board,ROW,COL);
	//下棋
	while(1)
	{
		//玩家下棋
		PlayMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//判断玩家是否赢
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//判断电脑是否赢
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	}
	if(ret=='*')
	{
		printf("玩家赢\n");
	}
	else if(ret=='#')
	{
		printf("你是笨蛋吗，这都让小机器人赢了，接下来你将接受惩罚\n");
		Punishment();
	}
	else
	{
		printf("平局了\n");
	}

}
void test()
{
	int input =0;
	srand((unsigned int)time(NULL));
	name();
	do
	{
	    menu();
		scanf("%d",&input);
		switch(input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
	    }
	}while(input);
}

int main()
{
	test();
	return 0;
}
