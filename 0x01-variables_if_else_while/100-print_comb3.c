#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always returns 0
 */

int main(void)
{
	int i, j;

	for  (i = 0; i < 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
