#include<stdio.h>
int main()
{
    int year,l;
    scanf("%d",&year);
    l=year % 100;
    printf("%02d",l);
    return 0;
}
