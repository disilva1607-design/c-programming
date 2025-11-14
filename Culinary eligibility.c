#include <stdio.h>

int main()
{
    int x, y;
    float per;

    scanf("%d %d", &x, &y);

    per = (y * 100.0) / x;

    if (per >= 75)
        printf("ELIGIBLE");
    else
        printf("NOT ELIGIBLE");

    return 0;
}
