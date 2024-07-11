#include <stdio.h>

int main()
{
	int a;
	char b;
	float c;
	double d;

	printf("Size of int is: %ld", sizeof(a)); // the size of integer type
	
	printf("\nSize of char is: %ld", sizeof(b)); // the size of charType
	
	printf("\nSize of float is: %ld", sizeof(c)); // the size of floatType

	printf("\nSize of double is: %ld", sizeof(d)); // the size of doubleType

	return 0;
}
