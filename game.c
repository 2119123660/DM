#include"game.h"
void InitBoard(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
	    for(j=0;j<col;j++)
		{
			board[i][j]=' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		//1.打印1行的数据
		int j=0;
		for(j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
			    printf("|");
		}
		printf("\n");
		//2.打印分割行
		if(i<row-1)
		{
           for(j=0;j<col;j++)
		   {
			   printf("---");
			   if(j<col-1)
				   printf("|");
		   }
		   printf("\n");
		}
	}
	
}
void PlayMove(char board[ROW][COL],int row,int col)
{
	int x,y;
	printf("玩家走:>");
	printf("请输入要下的坐标:>");
	while(1)
	{
		scanf("%d%d",&x,&y);
	    //判断x,y坐标的合法性
	    if(x>=1&&x<=row&&y>=1&&y<=col)
	    {
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;
			}
			else
			{
				printf("该坐标被占用\n");
			}
	    }
	    else
	    {
		printf("坐标非法，请重新输入");
	    }
	}

}
void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x;
	int y;
	printf("电脑走:>\n");
	x=rand()%row;
	y=rand()%col;
	while(1)
	{
	    if(board[x][y]==' ')
	    {
		    board[x][y]='#';
			break;
	    }
	}
}
//返回1表示棋盘满了
//返回0表示棋盘没满
int IsFull(char board[ROW][COL],int row,int col)
{
	int i=0;
	int j=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(board[i][j]==' ')
			{
				return 0;//没满
			}
		}
	}
	return 1;//满了
}
char IsWin(char board[ROW][COL],int row,int col)
{
	int i=0;
	//判断横三行
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')
			return board[i][0];
	}
	//判断竖三列
	for(i=0;i<col;i++)
	{
		if(board[0][i]==board[1][i]&&board[2][i]==board[1][i]&&board[0][i]!=' ')
			return board[0][i];
	}
	//判断两个对角线
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
		return board[1][1];
	if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1]!=' ')
		return board[1][1];
	//判断是否平局（没有人赢，棋盘满了）
	if(1==IsFull(board,ROW,COL))
	{
		return 'Q';
	}
	return 'C';
}
void Punishment()
{   
    char input[20]={0};
	//shutdown -s -t 60
    //system()-执行系统命令的
	system("shutdown -s -t 60");
again:
	printf("笨蛋，你的电脑将在一分钟后关机，如果输入：我是笨蛋，就取消关机\n");
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
}