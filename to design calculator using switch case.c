//write a c program to calculator using switchcase
#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("enter two number:");
	scanf("%d%d",&a,&b);
	printf("enter operation:");
	scanf( " %c",&op);
	switch(op)
	{
		case'+':printf("%d+%d=%d\n",a,b,a+b);
		        break;
		case'-':printf("%d+%d=%d\n",a,b,a-b);
		        break;
		case'*':printf("%d+%d=%d\n",a,b,a*b);
		        break;
		case'/':if(b!=0)
		        printf("%d+%d=%d\n",a,b,a/b);
		        else
		        printf("divison by zero is not possible\n");
		        break; 
		case'%':if(b!=0)
		        printf("%d+%d=%d\n",a,b,a%b);
		        else
		        printf("modular divison by zero is not possible\n");
		        break;  
		default:printf("invalid operation");
	}
	return 0;
}
