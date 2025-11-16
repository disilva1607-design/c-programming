#include<stdio.h>
int main()
{
	int A[10][10],T[10][10],i,j,r,c;
	printf("enter order of matrix:");
	scanf("%d%d",&r,&c);
	printf("enter the elements of matrix A:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		scanf("%d",&A[i][j]);
	}
}
