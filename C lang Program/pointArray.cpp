#include<conio.h>
#include<stdio.h>
int main()
{
	int a[5] ={5,4,6,7,9};		//compile time intialization
	

	printf("Address of a[0] =  %p\ n", &a[0]);
	printf("Address of a[1] =  %p\ n", &a[1]);
	printf("Address of a[2] =  %p\ n", &a[2]);
	printf("Address of a[3] =  %p\ n", &a[3]);
	printf("Address of a[4] =  %p\ n", &a[4]);
	
	int *p, *q;
	
	p=&a[0];
	
	q=&a[3];
	
	printf("\n%d",q-p);
	
	p=p+1;
	printf("\n%d",p);
	
}
