#include "main.h"
/**
 * _atoi - function name
 * @s: input
 * _pow - function
 * Return: Return type is int
 */
int _atoi(char *s)
{
	int index = 0;
	int minus = 0;
	int start = 0;
	int end = 0;
	int seen_number = 0;
	int answer = 0;
	int num;

	while (s[index])
	{
		if (s[index] >= 48 && s[index] <= 57)
		{
			if (seen_number == 0)
			{
				seen_number = 1;
				start = index;
			}
			end = index;
		}
		else
		{
			if (seen_number == 1)
				break;
		}
		if (s[index] == '-')
			minus++;
		index++;
	}
	if (seen_number == 0)
		return (0);
	while (start <= end)
	{
		num = s[start] - 48;
		answer += num * _pow(10, (end - start));
		start++;
	}
	if (minus % 2 != 0)
		return (-1 * answer);
	return (answer);
}

int _pow(int num, int power)
{
	int answer = 1;
	int index = 0;

	while (index < power)
	{
		answer *= num;
		index++;
	}
	return (answer);
}
