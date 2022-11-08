#include<conio.h>
#include<stdio.h>
void resv(int); 	//function protyping

int main()
{
	int a;
	printf("Enter the Number");
	scanf("%d",&a);
	resv (a);
}
void resv(int n)
{
	int r,i,res=0;
	while(n>0)
	{
		r=n%10;
		res=res*10+r;
		n=n/10;
	}
	printf("Reverse of given Number is=%d ",res);
}
