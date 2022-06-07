#include <stdio.h>
/**
 * main - The entry point of the program
 * Return: outps program result type, int
 */

int main(void)
{
	char start;

	start = 'a';

	while (start <= 'z')
	{
		if (start != 'q' && start != 'e')
		{
			putchar(start);
			start++;
		}
	}
	putchar('\n');
	return (0);
}
