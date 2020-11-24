/*
arrays in c
 22 Nov 2020
*/

#include <stdio.h>

int main(void)
{
	// ways to initialize an array
/*
	int data1[5];
	int data2[5] = {1, 2, 3, 4, 5}
	int data3[5] = {0}
	int data4[] = {1, 2, 3, 4, 5}
*/

	const int SIZE = 5;
	int ar[SIZE] = {1, 2, 3, 4, 5};

	// also check for "i <= SIZE"
	for (int i = 0; i < SIZE; ++i)
	{
		printf("%d\n", ar[i]);
	}

	// printing address range for modern machines
	printf("Address(in hexadecimal) of array 'ar' is from %p to %p\n", ar, ar+SIZE);

	return 0;
}