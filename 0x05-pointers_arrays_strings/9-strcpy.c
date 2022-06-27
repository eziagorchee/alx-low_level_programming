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

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
