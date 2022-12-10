#include <stdio.h>

/**
 * main - program that prints all possible different combinations of
 *
 * three digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Return: 0
 */
int main(void)
{
	int n1 = '0';
	int n2 = '0';
	int n3 = '0';

	for (n3 = '0'; n3 <= '9'; n3++)
	{
		for (n2 = '0'; n2 <= '9'; n2++)
		{
			for (n1 = '0'; n2 <= '9'; n1++)
			{
				if (!((n1 == n2) || (n2 == n3) || (n2 > n1) || (n3 > n2)))
				{
					putchar(n3);
					putchar(n2);
					putchar(n1);
					if (!(n1 == '9' && n3 == '7' && n2 == '8'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
