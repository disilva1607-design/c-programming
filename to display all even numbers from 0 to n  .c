//write a c program to display all even numbers from 0 to n
#include<stdio.h>
int main()
{
	int n,i=0;
	printf("enter a value:");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\t",i);
		i=i+2;
	}
	return 0;
}
