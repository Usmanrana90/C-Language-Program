#include<conio.h>
#include<stdio.h>
#include<string.h>		
int main()
{
	char n[20],m[20];
	int a;
	printf("Enter your First String:");
	scanf("%s",n);
	
	printf("Enter your Second String:");
	scanf("%s",m);
	
	strcat(n,m);  //4 string metch k liye a=strncmp
	printf("%s",n);
}

