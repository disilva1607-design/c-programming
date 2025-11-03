#include <stdio.h>
int main()
{
    int X, A, B, TOTAL;
    scanf("%d%d%d", &X, &A, &B);
    TOTAL = A * 1 + B * 2;
    if (TOTAL >= X)
        printf("Qualify");
    else
        printf("Not Qualify");
    return 0;
}






