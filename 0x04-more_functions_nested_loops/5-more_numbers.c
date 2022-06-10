#include "main.h"
/**
 * more_numbers - function name
 */
void more_numbers(void)
{
	int i = '0';
	int j = '0';

	while (i >= '0' && i <= '10')
	{
		while (j >= '0' && j <= '14')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
