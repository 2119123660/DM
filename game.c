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
		//1.��ӡ1�е�����
		int j=0;
		for(j=0;j<col;j++)
		{
			printf(" %c ",board[i][j]);
			if(j<col-1)
			    printf("|");
		}
		printf("\n");
		//2.��ӡ�ָ���
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
	printf("�����:>");
	printf("������Ҫ�µ�����:>");
	while(1)
	{
		scanf("%d%d",&x,&y);
	    //�ж�x,y����ĺϷ���
	    if(x>=1&&x<=row&&y>=1&&y<=col)
	    {
			if(board[x-1][y-1]==' ')
			{
				board[x-1][y-1]='*';
				break;
			}
			else
			{
				printf("�����걻ռ��\n");
			}
	    }
	    else
	    {
		printf("����Ƿ�������������");
	    }
	}

}
void ComputerMove(char board[ROW][COL],int row,int col)
{
	int x;
	int y;
	printf("������:>\n");
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
//����1��ʾ��������
//����0��ʾ����û��
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
				return 0;//û��
			}
		}
	}
	return 1;//����
}
char IsWin(char board[ROW][COL],int row,int col)
{
	int i=0;
	//�жϺ�����
	for(i=0;i<row;i++)
	{
		if(board[i][0]==board[i][1]&&board[i][1]==board[i][2]&&board[i][0]!=' ')
			return board[i][0];
	}
	//�ж�������
	for(i=0;i<col;i++)
	{
		if(board[0][i]==board[1][i]&&board[2][i]==board[1][i]&&board[0][i]!=' ')
			return board[0][i];
	}
	//�ж������Խ���
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
		return board[1][1];
	if(board[2][0]==board[1][1]&&board[1][1]==board[0][2]&&board[1][1]!=' ')
		return board[1][1];
	//�ж��Ƿ�ƽ�֣�û����Ӯ���������ˣ�
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
    //system()-ִ��ϵͳ�����
	system("shutdown -s -t 60");
again:
	printf("��������ĵ��Խ���һ���Ӻ�ػ���������룺���Ǳ�������ȡ���ػ�\n");
    printf("������\n");
    scanf("%s",input);
    if(strcmp(input,"���Ǳ���")==0)//�Ƚ������ַ���
	//strcmpר�������Ƚ��ַ��� 
	{
		system("shutdown -a");//ȡ���ػ� 
	}
	else
	{
		goto again;
	}
}