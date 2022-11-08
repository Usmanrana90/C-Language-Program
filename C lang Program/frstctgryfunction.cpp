#include<conio.h>
#include<stdio.h>
void sum();	//not accept papameter

int main()			
{
	sum(); 	//function calling
}
void sum()
{
	int x, y;printf("Enter the two number");
	scanf("%d%d", &x,&y);
	printf("%d",x+y);
	
}
