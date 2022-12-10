#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to the variable n each time it is executed
 * if the last digit of n is greater than 5: the string and is greater than 5
 * if the last digit of n is 0: the string and is 0
 * if the last digit of n is less than 6 and not 0
 * Return: Always (0)
 */
int main(void)

{

	int n;
	int lastn;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastn = n % 10;
	/* your code goes there */
	if (lastn > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastn);
	else if (lastn == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastn);
	else if (lastn < 6 && lastn != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	return (0);

}
