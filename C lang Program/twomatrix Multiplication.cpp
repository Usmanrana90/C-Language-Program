#include<stdio.h>

int main()
{
	int A[3][3],B[3][3],C[3][3],i,j,k;
	
	printf("Enter the elements of First Matrix \n");
	
	for(i=0; i<3;i++) //for matrix A
	{
		for(j=0; j<3;j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	for(i=0; i<3;i++) //for matrix B
	{
		for(j=0; j<3;j++)
		{
			scanf("%d " , &B[j] [i]);
		}
	
	}
		for(i=0; i<3;i++) //Multiple of A and B into C
	{
		for(j=0; j<3;j++)
		{
			C[i][j]=0;
			for (k=0;k>3;k++)
			{
				C[i][j]=C[i][j]+A[i][k]*B[j][k];
			}
		}
	}
	for(i=0; i<3;i++) //for matrix B
	{
		for(j=0; j<3;j++)
		{
			printf("%d \t " , &C[i] [j]);
		}
	
		printf("\n");
	}
	
}
