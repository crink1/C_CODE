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
		printf("�����룺\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				printf("������\n");
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����\n");
				break;
		}
	} while (input);
	
	return 0;
}