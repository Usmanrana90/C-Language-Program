#include<conio.h>
#include<stdio.h>
int main()

{
	char ch;
	int a;
	
	float f;						// sizeof() operator is used to find the size of
	double d;						// a variabale or constant
	 
	printf("%d\n",sizeof('a'));  // 1 byte  1 char
	printf("%d\n",sizeof(7));  // 4 byte
	printf("%d\n",sizeof(10.5)); // 8
	printf("%d\n",sizeof("usman")); // A striing always end with '\0' char.
}



// number start with 0 is octal number
//Number start with 0x or Ox is hexadecimal number

