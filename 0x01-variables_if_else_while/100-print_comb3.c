#include <stdio.h>

/**
 * main - program that prints the numbers from 00 to 99
 *
 * Numbers must be separated by ,followed by a space
 * Numbers should be printed in ascending order with 2 digits
 * You can only use the putchar function
 * Return: 0
 */
int main(void)
{
	int n1 = '0';
	int n2 = '0';

	for (n2 = '0'; n2 <= '9'; n2++)
	{
		for (n1 = '0'; n1 <= '9'; n1++)
		{
			if (!((n1 == n2) || (n2 > n1)))
			{
				putchar(n2);
				putchar(n1);
				if (!(n1 == '9' && n2 == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
