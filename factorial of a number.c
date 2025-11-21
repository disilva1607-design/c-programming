#include<stdio.h>
int main()
{
	int n,fact=1,i=1;
	printf("enter a value:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i=i+1;
	}
	printf("fact=%d\n",fact);
	return 0;
}
