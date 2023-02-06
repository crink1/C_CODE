#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void menu()
{
	printf("1.play\n");
	printf("0.exit\n");

}


void game()
{
	char board[3][3];
	InitBoard(board,3,3);


}

int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入：\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				printf("三子棋\n");
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