//write a c program to find the no of digits in a given number
#include<stdio.h>
int main()
{
	int rev=0,n,r,m;
	printf("enter a number:");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==m)
	{
		printf("palindrome\n");
	}
	else
	{
		printf("Not a palindrome\n");
	}
	return 0;
}
