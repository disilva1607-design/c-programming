//write a c program to find sum of first n natural numbers
#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum+=i;
		i++;
	}
	printf("sum=%d\n",sum);
	return 0;
}
