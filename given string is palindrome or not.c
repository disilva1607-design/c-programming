#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,l;
	char s[10],ch;
	puts("enter your name:");
	gets(s);
	strlen(s);
	for(i=0,j=l-1;i<j;i++,j--)
	{
		if(s[i]!=s[j])
		{
			printf("given string is not a palindrome");
			return 0;
		}
	}
	printf("given string is a palindrome");
	return 0;
}
