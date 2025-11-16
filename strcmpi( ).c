#include<stdio.h>
#include<string.h>
int main()
{
	 int res;
	char s1[]="ABCD";
	char s2[]="abcd";
	res=strcmpi(s1,s2);
	if(res==0)
	printf("equal");
	else if(res<0)
	printf("smaller");
	else
	printf("larger");
	return 0;
}
