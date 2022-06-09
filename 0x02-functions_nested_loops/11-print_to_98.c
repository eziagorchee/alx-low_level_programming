#include "main.h"
/**
 * print_to_98 - The entry point
 * @n: The integar
 * Return: void
 */
void print_to_98(int n)
{
	if (n == 0 || n == 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	for (int loop = n; loop < 98; loop++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
