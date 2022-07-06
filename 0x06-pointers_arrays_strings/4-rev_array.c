#include "main.h"
/**
 * reverse_array -function name
 * @a: pointer to array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	while (a[i] <= (n / 2))
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}

}
