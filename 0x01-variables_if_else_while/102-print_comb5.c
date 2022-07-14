#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always returns 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(i + '0');
			putchar(' ');
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 9 && j == 9)
				continue;

			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
