#include"main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size: size of the triangle
 *
 * Return: Always 0 (Success)
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	for (i = 0; i < size; i++)
		{
			for (j = size - i - 1; j > 0; j--)
				_putchar(' ');
			for (j = i + 1; j > 0; j--)
				_putchar('#');
			_putchar('\n');
		}
}
