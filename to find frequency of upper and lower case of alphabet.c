//write a c program to find frequency of upper and lower case of alphabet
#include<stdio.h>
int main()
{
	int lower=0,upper=0,i;
	char s[100];
	puts("enter s:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&& s[i]<='z')
		lower++;
		else if(s[i]>='A' && s[i]<= 'Z')
		upper++;
}
    printf("%d",lower);
    printf("%d",upper);
    return 0;	
}
