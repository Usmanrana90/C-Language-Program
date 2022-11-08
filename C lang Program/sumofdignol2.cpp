#include<conio.h>
#include<stdio.h>
int main()
{

	int A[3][3] ,i,j,sum1=0,sum2=0;
	
	printf("Enter the elements of First Matrix\n");
	
	for(i=0; i<3;i++) //for matrix A
	{
		for(j=0; j<3;j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	for(i=0; i<3;i++) 
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sum1 = sum1 + A[i][j];
			}
		}
	}
	for(i=0; i<3;i++) 
	{
		for(j=0;j<3;j++)
		{
			if((i+j)==2)
			{
				sum2 = sum2 + A[i][j];
			}
		}
	}
	printf("sum of First Diagnol is = %d\n",sum1);
	printf("sum of Second Diagnol is = %d\n",sum2);

}
