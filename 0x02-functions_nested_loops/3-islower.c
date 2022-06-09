#include "main.h"
/**
 * islower - entry point
 * Return: returns 1 on success
 */
int islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
