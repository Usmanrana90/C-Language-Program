#include<conio.h>
#include<stdio.h>
void display();

int n=100;	//global variable

int main()
{
	
	int a=10;		//local variable
	
	printf("%d\n",n);
	printf("%d\n",a);
	
	display();
}
void display()
{
	
	int b=20;	//local variable
	printf("%d\n",n);
	printf("%d\n",b);
}

