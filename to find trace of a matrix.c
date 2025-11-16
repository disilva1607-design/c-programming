#include<stdio.h>
int main()
{
	int A[10][10],n,i,j,tr=0;
	printf("enter order of matrix A :");
	scanf("%d",&n);
	printf("enter matrix A elements:\n");
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	scanf("%d",&A[i][j]);
	for(i=0;i<n;i++)
	tr=tr+A[i][i];
	printf("trace of given matrix is %d",tr);
	return 0;
}
