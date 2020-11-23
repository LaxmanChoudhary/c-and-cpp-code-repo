/*
recursion in c
factorial example
 22 Nov 2020
*/

#include <stdio.h>

long int factorial(int);


int main(void)
{
	int n;
	long int result;

	printf("Enter num to factorial: ");
	scanf("%d", &n);

	result = factorial(n);
	printf("Result is %ld\n", result);

	return 0;
}


long int factorial(int n)
{
	if (n==1){
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}