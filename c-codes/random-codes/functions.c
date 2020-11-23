/*
c functions
 22 Nov 2020
*/
#include <stdio.h>
#include <time.h>
#include <unistd.h> //for time delay

// 1. function declaration
// return_type function_name(**args);

void print_itimes(int);
void sum_of_array(int *);



int main(void)
{
	// initialization is a good thing, though not necessary
	// format specifier for unsigned short is %hu
	unsigned short int how_many=0;
	
	printf("Enter the count of prints: ");
	scanf("%hu", &how_many);

	printf("++++ Transfering to function print_itimes ++++\n");
	sleep(2); // 2 second thread sleep

	// 3. function call
	print_itimes(how_many);
}


/*----FUNCTION DEFINITIONS----*/

// 2. works for max of 65,535
void print_itimes(int times)
{
	unsigned short int i;

	for (i = 0; i < times; ++i)
	{
		printf("%hu time\n", i+1);
	}
}

int sum_of_array(int array*)
{

}
