#include "main.h"
/**
 * _strcpy - function name
 * @dest: destination address
 * @src: souce address
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;
	int len = 0;

	while (src[len])
		len++;
	while (index <= len)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
