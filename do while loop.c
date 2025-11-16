#include<stdio.h>
int  main()
{
	int n,f1=0,f2=1,f3,i=0;
	printf("enter A number:");
	scanf("%d",&n);
	do
	{
		printf("%d\t",f1);
		f3=f1+f2;
		f1=f2;
		f2=f3;
		i++;	
	} while(i<n);
	return 0;
}
