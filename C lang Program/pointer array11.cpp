#include<conio.h>
#include<stdio.h>    		//array & pointer  relationship
int main()
{
	int *p;
	int a[10];
	p=&a[0];
	
	printf("Address hold by p is=%p \n",p);
	printf("Address hold by a is=%p \n",a);
	
}
