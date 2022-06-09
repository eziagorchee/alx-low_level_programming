#include "main.h"
/**
 * print_to_98 - The entry point
 * @n: The integar
 * Return: void
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	n++;
	_putchar('\n');
}
