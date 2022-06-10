#include "main.h"
/**
 * more_numbers - function name
 */
void more_numbers(void)
{
	int i = 1;
	int j;

	while (i >= 0 && i <= 10)
	{
		j = 0;
		while (j >= 0 && j <= 14)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
