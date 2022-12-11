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
	int x = '0';
	int y, z;

	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			z = 0;
			while (z <= 9)
			{
				if (x != y && x < y && y !=z && y < z)
				{
					putchar(x + 48);
					putchar(y + 48);
					putchar(z + 48);
					if (x +y +z != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				++z;
			}
			++y;
		}
		++x;
	}
	putchar('\n');
	return (0);
}
