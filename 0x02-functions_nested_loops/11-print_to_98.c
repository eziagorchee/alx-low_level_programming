#include "main.h"
/**
 * print_to_98 - The entry point
 * @n: The integar
 * Return: void
 */
void print_to_98(int n)
{
	int loop;

	if (n == 0 || n == 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	else if (n > 98)
		for (loop = n; loop >= 98; loop--)
	else
		for (loop = n; loop <= 98; loop++)

	_putchar(n + '0');
	_putchar(',');
	_putchar(' ');
	_putchar('\n');
}
