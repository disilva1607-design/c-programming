#include<stdio.h>
void add(int,int);
void add(int a,int b)
{
	printf("sum=%d\n",a+b);
}
int main()
{
	int x,y;
	printf("enter x and y values:");
	scanf("%d%d",&x,&y);
	add(x,y);
	return 0;
}
