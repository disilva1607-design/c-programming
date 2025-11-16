#include<stdio.h>
int main()
{
	int m[10][10],n,i,j;
	printf("enter order of matrix:\n");
	scanf("%d",&n);
	printf("enter the elements of matrix:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		scanf("%d",&m[i][j]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(m[i][j]!=0)
			{
				printf("given matrix is not a lower triangular matrix\n");
				return 0;
			}
		}
	}
	printf("given matrix is a lower triangular mtrix\n");
	return 0;
}
