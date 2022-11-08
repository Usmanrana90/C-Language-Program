#include<conio.h>
#include<stdio.h>
//accept parameter and return value

int abhi(int);

int main()
{
	int a,z; 	//local variable
	 printf("Enter the Number=");
	 scanf("%d",&a);
	 
	z = abhi(a);
	 printf("Area of Square is =%d",z);
	 
}
int abhi(int n)		//local varuiable
{
	return n*n;
}

