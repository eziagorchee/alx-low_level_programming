#include "main.h"
/**
 * swap_int - function name
 * @a: first param
 * @b: second param
 */
void swap_int(int *a, int *b)
{
	int temp1;

	temp1 = *a;

	*a = *b;
	*b = temp1;
}
