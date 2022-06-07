#include <stdio.h>
/**
 * main - The entry point of the program
 * Return: outputs result, int
 */

int main(void)
{
	unsigned int start = 0;

	while (start < 10)
	{
		if (start == 9)
		{
			putchar('0' + start);
		}
		else
		{
			putchar('0' + start);
			putchar(', ');
		}
	}
	putchar('\n');
	return (0);
}
