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
	char reverstr[index];
	int last_index = index;

	while (index > 0)
	{
		reverstr[last_index - index] = s[index - 1];
		_putchar(reverstr[last_index - index]);
		index--;
	}
	_putchar('\n');
}

