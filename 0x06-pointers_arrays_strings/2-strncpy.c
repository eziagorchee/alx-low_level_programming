#include "main.h"
/**
 * _strncpy - function name
 * @dest: first
 * @src: 2nd
 * @n: int
 * Return: pointer to char dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';
	return (ptr);
}
