#include "main.h"
/**
 * rev_string - function name
 * @s: param
 */
void rev_string(char *s)
{
	int index = 0;

	while (s[index] != 0)
	{
		index++;
	}
	int start = 0;
	int end = index - 1;

	char temp;

	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}
