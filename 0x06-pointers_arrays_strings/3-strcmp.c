#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1:first string input
 * @s2: second string input
 * Return: int type
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
