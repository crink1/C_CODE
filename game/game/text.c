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
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ʾ����
	DisplayBoard(board,ROW,COL);

	while (1)
	{
		//�������
		PlayerMove(board,ROW,COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		//��ӡ����
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}

	if ('*' == ret)
	{
		printf("���Ӯ\n");
	}
	else if ('#' == ret)
	{
		printf("����Ӯ\n");
	}
	else if ('Q' == ret)
	{
		printf("ƽ��\n");
	}
}
 
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("�������\n");
				break;
		}

	} while (input);
	return 0;
}