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

void reverse_string(char* string)
{
	printf("%d", sizeof(string));

}

int main()
{
	char arr[] = "abcdef";
	
	reverse_string(arr);
	return 0;
}