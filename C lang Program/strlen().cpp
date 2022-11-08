#include<conio.h>
#include<stdio.h>
#include<string.h>		
int main()
{
	char name[20];
	int l;
	printf("Enter your Name:");
	scanf("%s",name);
	
	l=strlen(name);
	printf("%d",l);
}

