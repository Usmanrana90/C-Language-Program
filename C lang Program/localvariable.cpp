#include<conio.h>
#include<stdio.h>
void display();

int main()
{
	int n=1000;		//local varibale
	printf("%d",n);
	display();
}

void display()
{
	int m=2000;		//local variable
	printf("%d",m);	//not access here bcz n is declare inside main()
}
