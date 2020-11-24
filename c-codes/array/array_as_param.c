/*
passing array as parameter
 24 Nov 2020
*/

#include <stdio.h>

double average_array(int how_many, int array[]);

int main(void)
{
	const int SIZE = 5;
	int array[SIZE];

	for (int i = 0; i < SIZE; ++i){
		printf("Enter no. %d: ", i+1);
		scanf("%d", &array[i]);
	} 

	printf("\n++++++++++++++++\n");
	printf("Average: %.2lf\n", average_array(SIZE, array));
	printf("++++++++++++++++\n");

	return 0;
}

double average_array(int items, int array[])
{
	double sum = 0;

	for (int i = 0; i < items; ++i)
	{
		sum = sum + array[i];
	}

	return (sum/items);
}