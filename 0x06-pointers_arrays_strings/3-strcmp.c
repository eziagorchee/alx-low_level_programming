#include "main.h"
/**
 * _strcmp - function name
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: type of int
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1 && s2)
	{
		if (s1[index] != s2[index])
		{
			index++;
			break;
		}
		else
		i{
			index++;
		}
	}
	return (s1[index] - s2[index]);
}
