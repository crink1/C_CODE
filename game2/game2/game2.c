#define _CRT_SECURE_NO_WARNINGS 1
#include"game2.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols,char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("******* 扫雷 *******\n");
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i < row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j < col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}


void SetMain(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	

	while (count > 0)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
	
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0');
}


void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查的坐标:");
		scanf("%d %d", &x, &y);
		
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if ('*' == show[x][y])
			{
				if ('1' == mine[x][y])
				{
					printf("你寄了\n");
					DisplayBoard(mine ,ROW,COL);
					break;
				}
				else
				{
					int count=GetMineCount(mine, x, y);
					show[x][y] = count + '0';
					DisplayBoard(show, ROW, COL);
					win++;
				}
				
			}
			else
			{
				printf("该位置已被排查\n");
			}
		}
		else
		{
			printf("坐标非法");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}


