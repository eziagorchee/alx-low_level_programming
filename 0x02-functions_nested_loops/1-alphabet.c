#include "main.h"
/**
 * main -The entry point of the program
 * Return: outputs result
 */

void print_alphabet(void)
{
	char start = 'a';
	
	while (start <= 'z')
	
	{
		_putchar(start);
		start++;
		
	}
	_putchar('\n');
}
