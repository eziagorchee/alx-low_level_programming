#include "main.h"
/**
 * print_square - function name
 * @size: This number determines size of a square
 */
void print_square(int size)
{
	int i;
	int j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
