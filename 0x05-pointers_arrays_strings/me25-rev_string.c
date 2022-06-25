#include "main.h"
/**
 * rev_string - function name
 * @s: param
 */
void rev_string(char *s)
{
	int index = 0;
	char temp;
	int start;
	int end;

	while (s[index] != 0)
	{
		index++;
	}
	start = 0;
	end = index - 1;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	}
}
