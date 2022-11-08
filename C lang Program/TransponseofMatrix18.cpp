#include<conio.h>
#include<stdio.h>
int main()
{
	int A[3][3] ,i,j;
	
	printf("Enter the elements of First Matrix\n");
	
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
			printf("%d \t" , A[j] [i]);
		}
		printf("\n");
	}
}
