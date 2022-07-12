#include <stdio.h>
#include <unistd.h>

/**
 * main - prints out a string using write
 *
 * Return: int 0 when done and no errors.
 */
 int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
