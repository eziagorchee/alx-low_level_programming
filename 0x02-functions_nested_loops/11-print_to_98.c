#include "main.h"
/**
 * print_to_98 - The entry point
 * @n: The integar
 * Return: void
 */
void print_to_98(int n)
{
	loop = 0;
	while (loop == n && loop <= 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	loop++;
	_putchar('\n');
}
