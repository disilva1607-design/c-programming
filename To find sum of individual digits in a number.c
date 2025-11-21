#include<stdio.h>
int main()
{
	int sum=0,n,r;
	printf("enter a number:");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("sum=%d\n",sum);
	return 0;
}
