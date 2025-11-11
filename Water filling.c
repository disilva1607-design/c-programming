#include <stdio.h>

int main()
{
    int B1, B2, B3;
    scanf("%d%d%d", &B1, &B2, &B3);
    
    if (B1 == 0 && B2 == 0 && B3 == 0)
        printf("Water filling time");
    else if (B1 == 0 && B2 == 0)
        printf("Water filling time");
    else if (B2 == 0 && B3 == 0)
        printf("Water filling time");
    else if (B3 == 0 && B1 == 0)
        printf("Water filling time");
    else
        printf("Not now");
        
    return 0;
}
