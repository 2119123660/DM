#define _CRT_SECURE_NO_WARNINGS 1 
#include<stdio.h>
#include<string.h>
#include"game.h"
void name()
{
    int i=0,len;
	char name[100];
	printf("����������ǳ�\n");
	gets(name);
	len =strlen(name);
	printf("�װ���");
    for(i=0;i<len;i++)
	{
		printf("%c",name[i]);
	}
	printf("\n");
	printf("��ѡ���Ƿ�ʼ��Ϸ:>\n");
}
void menu()
{
	printf("********************************\n");
	printf("****   1.play      0.exit   ****\n");
	printf("********************************\n");
}
//��Ϸ������ʵ��
void game()
{
	char ret={0};
	//���顪������߳���������Ϣ
	char board[ROW][COL]={0};//ȫ���ո�
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	DisplayBoard(board,ROW,COL);
	//����
	while(1)
	{
		//�������
		PlayMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//�ж�����Ƿ�Ӯ
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		//��������
		ComputerMove(board,ROW,COL);
		DisplayBoard(board,ROW,COL);
		//�жϵ����Ƿ�Ӯ
		ret=IsWin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
	}
	if(ret=='*')
	{
		printf("���Ӯ\n");
	}
	else if(ret=='#')
	{
		printf("���Ǳ������ⶼ��С������Ӯ�ˣ��������㽫���ܳͷ�\n");
		Punishment();
	}
	else
	{
		printf("ƽ����\n");
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
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
	    }
	}while(input);
}

int main()
{
	test();
	return 0;
}
