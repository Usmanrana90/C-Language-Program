#include<conio.h>
#include<stdio.h>
int main()
{
	int a[8]={3,5,6,4,1,5,9,0};	
	int *p, i, sum=0;
	
	p=a;
	
	for(i=0; i<8;i++)
	{
		sum=sum+*p;
		p=p+1;
		
		
	//	printf("%d",*p); //pointer accessng
	//	p=p+1;
	
		//printf(" %d \t" , a[i]);
	}
	
	printf("sum is=%d", sum);
	
}
