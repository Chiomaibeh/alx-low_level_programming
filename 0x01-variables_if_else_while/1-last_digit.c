#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - this is the main function
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        lastdigit = n % 10;
	
	if ((lastdigits > 5));
	{
		printf("last digit of %d is %d and is greater than 5\n" n, lastdigit);
	}
	
	return (0);

}
