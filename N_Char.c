#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char x;
    scanf("%c", &x);
    if (x >= 'a' && x <= 'z')
    {
        int ans = x - 32;
        printf("%c\n", ans);
    }
    else
    {
        int ans = x + 32;
        printf("%c\n", ans);
    }
    return 0;
}