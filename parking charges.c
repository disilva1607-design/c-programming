#include<stdio.h>
int main()
{
    int X,Y,H,amount;
    scanf("%d%d%d",&X,&Y,&H);
    amount=X+(H-1)*Y;
    printf("%d",amount);
    return 0;
}
