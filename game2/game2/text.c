#define _CRT_SECURE_NO_WARNINGS 1
#include"game2.h"



void menu()
{
	printf("1.play\n");
	printf("0.exit\n");
}



void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	DisplayBoard(show, ROW, COL);
	SetMain(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
	
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;

	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误\n");
				break;

		}
	} while (input);

	return 0;
}