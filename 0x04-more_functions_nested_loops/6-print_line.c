#include "main.h"
/**
 * print_line - function name
 * @n: number of times the loop would run
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
