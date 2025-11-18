//write a c program display in a week in words
#include<stdio.h>
int main()
{
	int d;
	printf("enter a number:");
	scanf("%d",&d);
	switch(d)
	{
		default:printf("invalid day\n");
		        break;
	    case 1:printf("SUNDAY\n");
	           break;
	    case 2:printf("MONDAY\n");
	           break;
	    case 3:printf("TUESDAY\n");
	           break;
	    case 4:printf("Wednesday\n");
	           break;
	    case 5:printf("Thursday\n");
	           break;
	    case 6:printf("Friday\n");
	           break;
	    case 7:printf("Saturday\n");
	           break;
	}
	return 0;
}
