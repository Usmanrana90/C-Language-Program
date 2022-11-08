#include<conio.h>
#include<stdio.h>
#include<string.h>		
int main()
{
	char n[20],m[20];
	int l;
	printf("Enter your Name:");
	scanf("%s",n);
	
	strcat(m,n);
	printf("%d",m);
}

