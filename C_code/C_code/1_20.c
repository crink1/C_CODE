//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//
//
//void memu()
//{
//	printf("1.play\n0.exit\n");
//}
//
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("������µ����֣�\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//
//
//	}
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int x = 0;
//	
//	do
//	{
//		memu();
//		printf("��ѡ��\n");
//		scanf("%d", &x);
//		switch (x)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//	} while (x);
//	
//		
//	return 0;
//}