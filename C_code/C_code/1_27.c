#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//·ÇµÝ¹é
//int main()
//{
//	int a = 0, j = 1, k = 0, n = 0;
//	scanf("%d",&n);
//	for (int i = 1; i <= n; i++)
//	{
//		k = a + j;
//		a = j;
//		j = k;
//		
//	}
// printf("%d ", a);
//
//	return 0;
//}

//µÝ¹é
//int fib(int n)
//{
//	if (n<3)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//int main()
//{
//	int a = 0, j = 1, k = 0, n = 0;
//	scanf("%d",&n);
//	printf("%d",fib(n));
//	return 0;
//}


//int nk(int n,int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return nk(n, k - 1) * n;
//	}
//
//}
//
//int main()
//{
//	int  k = 0, n = 0;
//	scanf("%d %d", &n,&k);
//	printf("%d",nk(n, k));
//
//	return 0;
//}


//int DigitSum(unsigned int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return DigitSum(n / 10) + (n % 10);
//	}
//}
//
//int main()
//{
//	int  n = 0;
//	scanf("%d", &n);
//	printf("%d", DigitSum(n));
//
//	return 0;
//}

//void reverse_string(char* string)
//{
//	
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	
//	reverse_string(arr);
//	return 0;
//}


//int strlenarr(char arr[])
//{
//	if (*arr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + strlenarr(arr + 1);
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%d", strlenarr(arr));
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		
//		i++;
//	}
//	printf("%d", i);
//	return 0;
//}

//int jc(int n)
//{
//	if (0 == n || 1 == n)
//	{
//		return 1;
//	}
//	else
//	{
//		return jc(n - 1)* n;
//	}
//}
//
//int main()
//{
//	int i = 0, n = 0;
//	int s = 1;
//	scanf("%d", &n);
//	printf("%d", jc(n));
//	return 0;
//}


//int num(int n)
//{
//	if (n > 9)
//	{
//		num(n / 10);
//	}
//	printf("%d  ", n % 10);
//
//}
//
//int main()
//{
//	int i = 0, n = 0;
//	int s = 1;
//	scanf("%d", &n);
//	num(n);
//	return 0;
//}