#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -assign a random number to the variable n each time it is excecuted
 * if the number is greater than 0: is negative, if the number is 0: is zero
 * if number is less than 0: is negative, followed by a new line
 * Return: 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0 )
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
