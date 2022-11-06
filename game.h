#define ROW 3
#define COL 3
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
//函数声明
void InitBoard(char board[ROW][COL],int row,int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void PlayMove(char board[ROW][COL],int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);

//玩家赢‘*’
//电脑赢 ‘#’
//平局    'Q'
//继续游戏   'C'
char IsWin(char board[ROW][COL],int row,int col);
void Punishment();