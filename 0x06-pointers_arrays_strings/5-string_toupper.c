#include "main.h"
/**
 * string_toupper - function name
 * @x: pointer to char parameter
 * Return: pointer to char
 */
char *string_toupper(char *x)
{
	int x_value;
	int index = 0;

	while (x[index] != 0)
	{
		if (x[index] >= 97 && x[index] <= 122)
		{
			x_value = x[index] - 97;
			x[index] = x_value + 65;
		}
		index++;
	}
	return (x);
}
