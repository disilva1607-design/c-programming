#include<stdio.h>
int main()
{
	int a[10],n,i,min,max;
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	largest=a[0];
	for(i=1;1<n;i++)
	{
		if (largest,a[i]);
		{
			largest=a[i];
		}
	}
	printf("largest number is %d\n",largest);
	printf("array size is %d\n",sizeof(a));
	return 0;
}
