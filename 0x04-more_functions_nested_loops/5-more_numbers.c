#include "main.h"
/**
 * more_numbers - function name
 */
void more_numbers(void)
{
	int i = 0;
	int j = 1;

	while (i >= 0 && i <= 10)
	{
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
