#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n <= 3)
        printf("BRONZE");
    else if (n > 3 && n <= 6)
        printf("SILVER");
    else
        printf("GOLD");
    return 0;
}
