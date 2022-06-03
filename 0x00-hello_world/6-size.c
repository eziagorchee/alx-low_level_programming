#include <stdio.h>
/**
 * main - The entry point of the program
 * Return: Outputs an integar which is the set return type
 */
int main(void)
{
	char chars;
	int ints;
	long int long_int;
	float floats;
	long long int doubles;

	printf("Size of a char: %zu byte(s)\n", sizeof(chars));
	printf("Size of an int: %zu byte(s)\n", sizeof(ints));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long_int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(doubles));
	printf("Size of a float: %zu byte(s)\n", sizeof(floats));
	return (0);
}
