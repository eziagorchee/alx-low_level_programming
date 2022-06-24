#include "main.h"
/**
 * swap_int - function name
 * @a: first param
 * @b: second param
 */
void swap_int(int *a, int *b)
{
	int *temp1;
	int *temp2;

	temp1 = &*a;
	temp2 = &*b;
	temp2 = *a;
	temp1 = *b;
}
