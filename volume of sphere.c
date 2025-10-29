#include <stdio.h>
#include <math.h>

int main()
{
    int r;
    float v;
    scanf("%d", &r);
    v = (4 * 3.14 * (pow(r, 3))) / 3;
    printf("%.2f", v);
    return 0;
}
