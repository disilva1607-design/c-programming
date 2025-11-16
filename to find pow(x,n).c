
#include <stdio.h>
#include <math.h>   
int main()
{
    int b, e;
    printf("enter base:");
    scanf("%d", &b);
    printf("enter exponential:");
    scanf("%d", &e);
    printf("pow(%d,%d) = %.0f\n", b, e, pow(b, e));
    return 0;
}
