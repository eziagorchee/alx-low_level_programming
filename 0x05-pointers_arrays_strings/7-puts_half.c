#include "main.h"
/**
 * puts_half - function name
 * @str: parameter
 */
void puts_half(char *str)
{
	int index = 0;
	int half;

	while (str[index] != 0)
		index++;
	if (index % 2 == 0)
		half = index / 2;
	else
		half = (index - 1) / 2;
	while (half <= index)
	{
		_putchar(str[half]);
		half++;
	}
}
