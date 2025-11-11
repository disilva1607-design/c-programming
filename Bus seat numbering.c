#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    
    if (n >= 1 && n <= 10)
        printf("Lower Double");
    else if (n > 10 && n < 16)
        printf("Lower Single");
    else if (n >= 16 && n <= 25)
        printf("Upper Double");
    else if (n > 25 && n < 31)
        printf("Upper Single");
    
    return 0;
}
