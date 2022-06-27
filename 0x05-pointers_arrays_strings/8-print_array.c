#include <stdio.h>
#include "main.h"
/**
 * print_array - function name
 * @a: array
 * @n: lenght of array
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		if (index == n - 1)
			printf("%d\n", a[index]);
		else
			printf("%d, ", a[index]);
		index++;
	}
}
