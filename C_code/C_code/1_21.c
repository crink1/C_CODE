//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h> 
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int input = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d",&input);
//	int right = sz-1;
//	int left = 0;
//	int mid = 0;
//	int flag = 1;
//	
//	while (left <= right)
//	{
//		mid = left + (right - left) / 2;
//		if (arr[mid] < input)
//		{
//			left = mid+1;
//
//		}
//		else if (arr[mid] > input)
//		{
//			right = mid-1;
//		}
//		else
//		{
//			printf("找到了下标是%d",mid);
//			flag = 0;
//			break;
//		}
//
//	}
//	if (1==flag)
//	{
//		printf("没找到");
//	}
//
//	return 0;
//}