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
//		printf("输入你猜的数字：\n");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
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
//		printf("请选择：\n");
//		scanf("%d", &x);
//		switch (x)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	} while (x);
//	
//		
//	return 0;
//}