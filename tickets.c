#include <stdio.h>

int main()
{
    int X, total_cost;
    scanf("%d", &X);
    total_cost = 4 * X;
    if (total_cost <= 1000)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
