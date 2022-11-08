
					//method 1


#include<conio.h>
#include<stdio.h>
void show(int[],int);
int main()
{
	int a[]={3,4,5,6,7,1};
	show( a,6);
}
void show(int t[] , int n)
{
	
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d\t",t[i]);
	}
}
