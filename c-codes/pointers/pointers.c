/*
Pointers in c
* kind of address referencing mechanism
 22 Nov 2020
*/

#include <stdio.h>

int main(void)
{
	int a = 3;
	int *p = &a;

	printf("a = %d\n", a);

	// %lu prints address in decimal
	// %p refers to the address in hexadecimal format
	printf("p = %lu or %p | sizeof p: %lu\n", p, p, sizeof(p));

	printf("*p = %d | sizeof *p: %ld\n", *p, sizeof(*p));

	return 0;
}