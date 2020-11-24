/*
swap funtion using parameter reference
 24 Nov 2020
*/

#include <stdio.h>
#include <unistd.h>

void swap_numbers(int *, int *);

int main(void)
{
	int num1, num2;

	printf("Enter num1: ");
	scanf("%d", &num1);

	printf("Enter num2: ");
	scanf("%d", &num2);

	printf("\n-----------------\n");
	printf("Numbers befor swap\n");
	printf("num1 = %d | num2 = %d\n", num1, num2);
	sleep(2);

	swap_numbers(&num1, &num2);

	printf("\n-----------------\n");
	printf("Numbers after swap\n");
	printf("num1 = %d | num2 = %d\n", num1, num2);

	return 0;
}

void swap_numbers(int *num1, int *num2)
{
	*num1 = *num1 + *num2;
	*num2 = *num1 - *num2;
	*num1 = *num1 - *num2;
}