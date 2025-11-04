#include<stdio.h>
int main()
{
	int a[10],n,i,low,high,mid,key,count=0;
	printf("enter number of elements:");
	scanf("%d",&n);
	printf("enter list of elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter an element to search:");
	scanf("%d",&key);
	low=0;high=n-1;
	while(low<=high)
	{
		mid=(low + high)/2;
		if(key == a[mid])
		{
			count = 1;
			break;
		}
		else if(key<a[mid])
		high=mid-1;
		else
		low=mid+1;
	}
	if(count == 0)
	printf("%d is not in the list\n",key);
	else
	printf("%d is found at %d position\n",key,mid+1);
	return 0;
}
