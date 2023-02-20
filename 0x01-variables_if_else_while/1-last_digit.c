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
<<<<<<< HEAD

=======
>>>>>>> eb07a0f989bd5441884b88e917bc461eb96044ae
int main(void)
{
	int n;

<<<<<<< HEAD
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
=======
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	m = n % 10;
	if (m > 5)
		printf("Last digitof %d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n" n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	return (0);
}

>>>>>>> eb07a0f989bd5441884b88e917bc461eb96044ae
