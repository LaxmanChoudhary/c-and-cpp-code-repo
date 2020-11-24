/*
24 Nov 2020
*/

#include <stdio.h>

int main(void)
{
	const int SIZE = 5;
	int temp = 6;
	int *p = &temp;

	printf("enter temp\n");
	scanf("%d", &temp);

	printf("*p: %d\n", *p);

	return  0;
}