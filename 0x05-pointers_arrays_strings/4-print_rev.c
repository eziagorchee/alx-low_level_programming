#include "main.h"
/**
 * print_rev - function name
 * @s: parameter
 */
void print_rev(char *s)
{
	int index;

	index = 0;
	while (s[index] != 0)
	{
		index++;
	}
	while (index > 0)
	{
		index--;
		_putchar(s[index]);
	}
	_putchar('\n');
}
