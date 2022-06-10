#include "main.h"
/**
 * _isdigit - The function name
 * @c: The number to be checked
 * Return: return type is int
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
