#include<conio.h>
#include<stdio.h>
void fact(int); 	//function protyping

int main()
{
	int a;
	printf("Enter the number");
	scanf("%d",&a);
	
	fact(a);
}
void fact(int n)
{
	
	int f=1, i=1;
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("Factroial= %d",f);
}
