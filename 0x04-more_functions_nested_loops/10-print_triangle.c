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
	int hght, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (hght = 1; hght <= size; ++hght)
		{
			if ((hght + base) <= size)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
