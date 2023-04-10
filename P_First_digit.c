#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    int digit = a / 1000;
    if (digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }
    return 0;
}