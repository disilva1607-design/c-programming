#include<stdio.h>
int main()
{
	int upper=0,lower=0,digit=0,specialchar=0,i;
	char s[100];
	puts("enter s:");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&& s[i]<='z')
		lower++;
		else if(s[i]>='A'&& s[i]<='Z')
		upper++;
		else if(s[i]>='0'&& s[i]<='9')
		digit++;
		else
		specialchar++;
	}
	printf("lower case is %d\n",lower);
	printf("upper case is %d\n",upper);
	printf("digit is %d\n",digit);
	printf("specialchar is %d\n",specialchar);
	return 0;
}
