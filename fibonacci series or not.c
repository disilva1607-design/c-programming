#include<stdio.h>
int main()
{
	int n,f1=0,f2=1,f3;
	printf("enter a number:");
	scanf("%d",&n);
	while(n>=f1)
	{
		if(n==f1)
		{
			printf("YES\n");
			return 0;
		}
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	printf("NO\n");
	return 0;
}
