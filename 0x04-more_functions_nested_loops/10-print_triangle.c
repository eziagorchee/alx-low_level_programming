#include "main.h"
/**
 * print_triangle - function name
 * @size: The number that decides lenght of triangle
 */
void print_triangle(int size)
{
	int i = 0;
	int space;
	int hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < size)
	{
		space = size - i - 1;
		hash = size - space;
		while (space > 0)
		{
			_putchar(' ');
			space--;
		}
		while (hash > 0)
		{
			_putchar('#');
			hash--;
		}
		_putchar('\n');
		i++;
	}
}
