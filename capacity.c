#include<stdio.h>
int main()
{
    int T,S,B;
    long total_bytes;
    long capacity_kb;
    scanf("%d%d%d",&T,&S,&B);
    total_bytes=2L*T*S*B*512;
    capacity_kb=total_bytes/1024;
    printf("%ld KB",capacity_kb);
    return 0;
}
