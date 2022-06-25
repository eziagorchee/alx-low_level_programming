#include "main.h"
/**
 * rev_string - function name
 * @s: parameter
 */
void rev_string(char *s)
{
	int index;

	index = 0;

	while (s[index] != 0)
		index++;
	while (index > 0)
	{
		index--;
		_putchar(s[index]);
	}
	_putchar('\n');
}

