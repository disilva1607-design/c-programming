#include<stdio.h>
void f1();
int g=100;
int main()
{
	int a=40;
	printf("%d\n",a);
	printf("%d\n",g);
}
void f1()
{
	int b=30;
	printf("%d\n",b);
	printf("%d\n",g);
}
