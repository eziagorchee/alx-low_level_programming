#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 * Return: Always 0
 *
 */

void print_alphabet(void)
{
	char start;

	for (start = 'a'; start <= 'z'; start++)
	{
		_putchar(start);
	}
	_putchar('\n');
}
