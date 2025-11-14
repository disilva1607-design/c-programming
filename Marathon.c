#include <stdio.h>

int main()
{
    int a, b, c, d, count;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    count = 0;

    if (b > a) count++;
    if (c > a) count++;
    if (d > a) count++;

    printf("%d", count);

    return 0;
}
