#define _CRT_SECURE_NO_WARNINGS 1	
#include <stdio.h>


int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else if (a == b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d",max(a,b));
    return 0;
}