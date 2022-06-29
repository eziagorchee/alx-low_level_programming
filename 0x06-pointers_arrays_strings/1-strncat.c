#include "main.h"
/**
 * _strncat - function name
 * @dest: dsetination string
 * @src: source string
 * @n: number os src to be added to dest
 * Return: poinetr tpo char dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int k = 0;

	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (n >= j)
	{
		while (src[k])
		{
			dest[i] = src[k];
			i++;
			j++;
		}
		dest[i] = '\0';
	}
	else
	{
		while (k < n)
		{
			dest[i] = src[k];
			i++;
			k++;
		}
	}
	return (dest);
}
