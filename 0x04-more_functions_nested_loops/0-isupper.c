#include "main.h"
/**
 * _isupper - entry point
 * @c: The number to be checked
 * Return: returns 1 on success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
