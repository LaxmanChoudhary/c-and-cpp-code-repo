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

	for (int i = 0; i <= SIZE; ++i)
	{
		printf("%d\n", ar[i]);
	}
}