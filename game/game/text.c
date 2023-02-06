#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("1.play\n");
	printf("0.exit\n");

}

void game()
{

	char ret;
	char board[ROW][COL] = {0};
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//显示棋盘
	DisplayBoard(board,ROW,COL);

	while (1)
	{
		//玩家下棋
		PlayerMove(board,ROW,COL);
		//打印棋盘
		DisplayBoard(board, ROW, COL);
		//判读输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		//打印棋盘
		DisplayBoard(board, ROW, COL);
		//判读输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}

	if ('*' == ret)
	{
		printf("玩家赢\n");
	}
	else if ('#' == ret)
	{
		printf("电脑赢\n");
	}
	else if ('Q' == ret)
	{
		printf("平局\n");
	}
}
 
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("输入错误\n");
				break;
		}

	} while (input);
	return 0;
}