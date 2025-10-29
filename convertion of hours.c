#include <stdio.h>

int main()
{
    int totalseconds;
    int hours, minutes, seconds;
    scanf("%d", &totalseconds);
    hours = totalseconds / 3600;
    minutes = (totalseconds % 3600) / 60;
    seconds = totalseconds % 60;
    printf("H:M:S = %d:%d:%d", hours, minutes, seconds);
    return 0;
}






