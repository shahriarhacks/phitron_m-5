#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b && a < c)
    {
        printf("%d ", a);
        if (b > c)
        {
            printf("%d", b);
        }
        else
        {
            printf("%d", c);
        }
    }
    else if (b < a && b < c)
    {
        printf("%d ", b);
        if (a > c)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", c);
        }
    }
    else
    {
        printf("%d ", c);
        if (a > b)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", b);
        }
    }
    return 0;
}