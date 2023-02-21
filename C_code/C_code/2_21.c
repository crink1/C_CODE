#include <stdio.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//int main()
//{
//	int a[] = { 1, 2, 8, 4, 7, 6, 10, 12 };
//	int i = 0;
//	int sz = (sizeof(a) / sizeof(a[0]));
//	int* left = a;
//	int* right = a + sz - 1;
//	while (left<right)
//	{
//		
//		while (((left < right) && (*left) % 2 != 0))
//		{
//			left++;
//		}
//		while (((left < right) && (*right) % 2 == 0))
//		{
//			right--;
//		}
//		if (left < right)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", a[i]);
//	}
//	return 0;
//}

//
//#include<stdio.h>
//#include<assert.h>
//int my_strlen(const char* arr1)
//{
//	assert(arr1);
//	int count = 0;
//	while (*arr1)
//	{
//		count++;
//		arr1++;
//	}
//	return count;
//
//}
//
//int main()
//{
//	char arr1[] = "abcdef";
//	int n=my_strlen(arr1);
//	printf("%d\n", n);
//	return 0;
//}



//int main()
//{
//    int a = 0, b = 0, c = 0, d = 0, e = 0;
//    for (a = 1; a <= 5; a++)
//    {
//        for (b = 1; b <= 5; b++)
//        {
//            for (c = 1; c <= 5; c++)
//            {
//                for (d = 1; d <= 5; d++)
//                {
//                    for (e = 1; e <= 5; e++)
//                    {
//                        if ((2 == b && 3 != a) || (2 != b && 3 == a) == 1)
//                        {
//                            if ((2 == b && 4 != e) || (2 != b && 4 == e) == 1)
//                            {
//                                if ((1 == c && 2 != d) || (1 != c && 2 == d) == 1)
//                                {
//                                    if ((5 == c && 3 != d) || (5 != c && 3 == d) == 1)
//                                    {
//                                        if ((4 == e && 1 != a) || (4 != e && 1 == a) == 1)
//                                        {
//                                            if (((a != b) && (a != c) && (a != d) && (a != e))
//                                                && ((b != c) && (b != d) && (b != e))
//                                                && ((c != d) && (c != e))
//                                                && ((d != e)))
//                                            {
//                                                printf("a= %d, b= %d,c= %d,d= %d,e= %d\n", a, b, c, d, e);
//                                            }
//
//                                        }
//                                    }
//                                }
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    return 0;
//}


//int main()
//{
//	int A = 0, B = 0, C = 0, D = 0;
//	int f = 0;
//	int i;
//	for (i = 1; i <= 4; i++)
//	{
//
//		if (i == 1)
//		{
//			A = 1; C = 1; f = 1; D = 0;
//		}
//		if (i == 2)
//		{
//			A = 0; C = 0; f = 1; D = 0;
//		}
//		if (i == 3)
//		{
//			A = 0; C = 1; f = 0; D = 0;
//		}
//		if (i == 4)
//		{
//			A = 0; C = 1; f = 1; D = 0;
//		}
//		if (A + B + C + D + f == 1 && f == D)
//			printf("A=%d B=%d C=%d D=%d\n", A, B, C, D);
//	}
//	return 0;
//}