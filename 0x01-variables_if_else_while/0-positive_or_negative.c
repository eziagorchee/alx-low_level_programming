#include <stdlib.h>
#include <time.h>
/**
 * main - The entry head of the program
 * if - conditionals
 * else if - conditional check
 * Return: outputs result which is an int as defined
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n == 0)
		printf(n, ": is zero\n");
	else if (n > 0)
		printf(n, ": is positive\n");
	else
		printf(n, ": is negative\n");
	return (0);
}
