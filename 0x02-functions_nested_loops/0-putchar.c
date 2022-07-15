#include"main.h"

/**
 * main - Prints _putchar as a message
 *
 * Return: always returns 0
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (cch = 0; ch < 8; ++ch)
		_putchar(str[ch]);
	_putchar('\n');
	return (0);
}
