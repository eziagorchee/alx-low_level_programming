#include "main.h"
/**
 * print_most_numbers - The function name
 */
void print_most_numbers(void)
{
	unsigned int i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
