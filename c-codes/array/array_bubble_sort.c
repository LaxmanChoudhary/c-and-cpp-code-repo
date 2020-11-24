/*
bubble sort on array
 24 Nov 2020
*/

#include <stdio.h>

void swap(int *n1, int *n2)
{
	*n1 = *n1 + *n2;
	*n2 = *n1 - *n2;
	*n1 = *n1 - *n2;
}

void print_array(int items, int array[], char *str)
{
	printf("\n++ %s ++\n", str);
	for (int i = 0; i < items; ++i)
	{
		printf("%d  ", array[i]);
	}
	printf("\n");
}

void bubble_sort(int items, int array[])
{
	for (int i = 0; i < items; ++i)
	{
		print_array(items, array, "inside bubble");
		for (int j = items-1; j > i; --j)
		{
			if (array[j-1] > array[j])
			{
				swap(&array[j-1], &array[j]);
			}
		}
	}
}

int main(void)
{
	const int ITEMS = 5;

	int array[ITEMS] = {8, 2, 6, 10, 1};

	print_array(ITEMS, array, "outside bubble | before sorting");

	bubble_sort(ITEMS, array);

	print_array(ITEMS, array, "outside bubble | after sorting");

	return 0;
}